/*
需求：处理客户端发送的请求数据（目标点）控制乌龟向目标点移动 且要连续反馈剩余距离
步骤：
1.包含头文件
2.初始化 ROS2 客户端
3.定义节点类

4.调用 spin 函数，并传入节点对象指针
5.释放资源
*/
#include "rclcpp/rclcpp.hpp"
#include "turtlesim_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "base_interfeces/action/nav.hpp"

using std::placeholders::_1;
using std::placeholders::_2;
using base_interfeces::action::Nav;

// 自定义节点类
class Exer2ActionServer: public rclcpp::Node{
public:
    Exer2ActionServer():Node("exer2_actionserver_node_cpp"),x(0.0),y(0.0){
        RCLCPP_INFO(this->get_logger(),"动作服务端");
        // 创建乌龟位姿订阅方 获取当前乌龟状态
        sub_ = this->create_subscription<turtlesim_msgs::msg::Pose>("/turtle1/pose",10,std::bind(&Exer2ActionServer::pose_cb,this,_1));
        // 创建一个速度指令发布方 控制乌龟运动
        cmd_pub_ = this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel",10);
        // 动作服务端
        action_server_ = rclcpp_action::create_server<Nav>(
            this,
            "nav",
            std::bind(&Exer2ActionServer::handle_goal,this,_1,_2),
            std::bind(&Exer2ActionServer::handle_cancel,this,_1),
            std::bind(&Exer2ActionServer::handle_accepted,this,_1)
        );
    }
private:
    rclcpp::Subscription<turtlesim_msgs::msg::Pose>::SharedPtr sub_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_pub_;
    rclcpp_action::Server<Nav>::SharedPtr action_server_;
    float x,y;
    void pose_cb(const turtlesim_msgs::msg::Pose::SharedPtr pose){
        x = pose->x;
        y = pose->y;
    }
    // 请求目标处理
    // GoalResponse(const GoalUUID &,std::shared_ptr<const typename ActionT::Goal>)
    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID & uuid,std::shared_ptr<const Nav::Goal> goal){
        (void)uuid;
        (void)goal;

        // 取出目标的x y值 [0,11.08]判断是否合法
        if(goal->goal_x < 0 || goal->goal_x >11.08 || goal->goal_y < 0 || goal->goal_y > 11.08){
            RCLCPP_INFO(this->get_logger(),"目标点超出范围");
            return rclcpp_action::GoalResponse::REJECT;
        }
        RCLCPP_INFO(this->get_logger(),"目标点合法");

        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    // 取消请求处理
    // CancelResponse(std::shared_ptr<ServerGoalHandle<ActionT>>)
    rclcpp_action::CancelResponse handle_cancel(std::shared_ptr<rclcpp_action::ServerGoalHandle<Nav>> goal_handle){
        (void)goal_handle;
        RCLCPP_INFO(this->get_logger(),"取消任务");

        return rclcpp_action::CancelResponse::ACCEPT; 
    }

    // 主逻辑处理
    void execute(std::shared_ptr<rclcpp_action::ServerGoalHandle<Nav>> goal_handle){
        // 子线程
        RCLCPP_INFO(this->get_logger(),"主逻辑开始执行");
        // 最终结果
        auto result = std::make_shared<Nav::Result>();
        auto feedback = std::make_shared<Nav::Feedback>();
        geometry_msgs::msg::Twist twist;
        // 持续处理
        rclcpp::Rate rate(1.0);
        // 乌龟运动指令
        while (true)
        {
            // 取消任务 特殊处理
            if(goal_handle->is_canceling()){
                // 设置取消后的最终结果
                goal_handle->canceled(result);
                return;
            }
            // 解析目标点坐标与原生乌龟实时坐标
            float goal_x = goal_handle->get_goal()->goal_x;
            float goal_y = goal_handle->get_goal()->goal_y;
            // 计算剩余距离 发布
            float distance_x = goal_x - x;
            float distance_y = goal_y - y;
            float distance = std::sqrt(distance_x*distance_x + distance_y*distance_y);
            feedback->distance = distance;
            goal_handle->publish_feedback(feedback); 
            // 根据剩余距离计算距离指令并发布
            float scale = 0.5;
            float linear_x = scale * distance_x;
            float linear_y = scale * distance_y;
            twist.linear.x = linear_x;
            twist.linear.y = linear_y;
            cmd_pub_->publish(twist);  
            // 循环结束条件
            if (distance <= 0.05){
                RCLCPP_INFO(this->get_logger(),"王八已到目标点");
                break;
            }
            rate.sleep();
        }
        
        // 最终响应
        if(rclcpp::ok()){
            result->tutle_x = x;
            result->tutle_y = y;
            goal_handle->succeed(result);
        }

    }
    // void (std::shared_ptr<ServerGoalHandle<ActionT>>)
    void handle_accepted(std::shared_ptr<rclcpp_action::ServerGoalHandle<Nav>> goal_handle){
        // 创建子线程
        std::thread(std::bind(&Exer2ActionServer::execute,this,goal_handle)).detach();
    }
};

int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    rclcpp::spin(std::make_shared<Exer2ActionServer>());
    // 资源释放
    rclcpp::shutdown();
    return 0;
}