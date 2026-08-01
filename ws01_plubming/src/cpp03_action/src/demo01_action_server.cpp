/*
需求：动作服务端 解析客户端提交的数字 便利求和 最终返回客户端 连续返回
创建
    ros2 pkg create cpp03_action --build-type ament_cmake --dependencies rclcpp rclcpp_action base_interfeces --node-name demo01_action_server

自带工具测试
    ros2 action send_goal /get_sum base_interfeces/action/Progress -f "{'num':10}"
   1创建动作服务端对象
   2处理提交目标值
   3生成持续反馈
   4响应最终值
   5处理取消请求
步骤：
1.包含头文件
2.初始化 ROS2 客户端
3.定义节点类

4.调用 spin 函数，并传入节点对象指针
5.释放资源
*/
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "base_interfeces/action/progress.hpp"

using base_interfeces::action::Progress;
using std::placeholders::_1;
using std::placeholders::_2;

// 自定义节点类
class ProgressActionServer: public rclcpp::Node{
public:
    ProgressActionServer():Node("progress_actionserver_node_cpp"){
        RCLCPP_INFO(this->get_logger(),"action 服务端创建");
        // 创建动作服务端对象
        server_ = rclcpp_action::create_server<Progress>(
            this,
            "get_sum",
            std::bind(&ProgressActionServer::handle_goal,this,_1,_2),
            std::bind(&ProgressActionServer::handle_cancel,this,_1),
            std::bind(&ProgressActionServer::handle_accepted,this,_1)
        );

    }
    /* 1.处理提交的目标值 回调函数
        std::function<GoalResponse(const GoalUUID &,std::shared_ptr<const typename ActionT::Goal>)>;
   */
    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID & uuid,std::shared_ptr<const Progress::Goal> goal){
        (void)uuid; //未使用 声明取消警告
        // 业务逻辑 判断是否大于1 是接收 否拒绝
        if (goal->num <=1 ){
            RCLCPP_INFO(this->get_logger(),"提交的数据必须大于1");
            return rclcpp_action::GoalResponse::REJECT;
        }
        RCLCPP_INFO(this->get_logger(),"提交的目标值合法");
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;

    }

   /* 2.处理取消请求 
        std::function<CancelResponse(std::shared_ptr<ServerGoalHandle<ActionT>>)>;
   */
    rclcpp_action::CancelResponse handle_cancel(std::shared_ptr<rclcpp_action::ServerGoalHandle<Progress>> goal_handle){
        (void)goal_handle;
        RCLCPP_INFO(this->get_logger(),"接收到任务取消请求");
        return rclcpp_action::CancelResponse::ACCEPT;
    }
    
   /* 3.生成持续反馈与最终响应 
        std::function<void (std::shared_ptr<ServerGoalHandle<ActionT>>)>;
   */ 
    void execute(std::shared_ptr<rclcpp_action::ServerGoalHandle<Progress>> goal_handle){
        // 生成连续反馈返回给客户端
        // void publish_feedback(std::shared_ptr<base_interfeces::action::Progress_Feedback> feedback_msg)
        // goal_handle->publish_feedback();
        // 获取目标值 遍历 累加 每循环一次计算进度 并作为连续反馈发布
        int num = goal_handle->get_goal()->num;
        int sum = 0;
        auto feedback = std::make_shared<Progress::Feedback>();
        
        // 设置休眠
        rclcpp::Rate rate(1.0);
        auto result = std::make_shared<Progress::Result>();
        for (int i = 1; i <= num; i++)
        {
            sum += i;
            double progress = i/ (double)num;   // 计算进度
            feedback->progress = progress;
            goal_handle->publish_feedback(feedback);
            RCLCPP_INFO(this->get_logger(),"连续反馈中进度:%.2f",progress);

            // 判断是否接收取消请求
            
            // goal_handle->is_canceling()
            // goal_handle->canceled()
            if (goal_handle->is_canceling())
            {
                // 接收到 终止程序 return
                result->sum = sum;
                goal_handle->canceled(result);
                RCLCPP_INFO(this->get_logger(),"任务被取消");
                return;
            }
            rate.sleep();
        }
        

        // 生成响应结果
        // void succeed(std::shared_ptr<base_interfeces::action::Progress_Result> result_msg)
        // goal_handle->succeed()
        if (rclcpp::ok())
        {
            result->sum = sum;
            goal_handle->succeed(result);
            RCLCPP_INFO(this->get_logger(),"最终结果:%d",sum);
        }
        

    }

    void handle_accepted(std::shared_ptr<rclcpp_action::ServerGoalHandle<Progress>> goal_handle){
        // 创建子线程 处理耗时的主逻辑操作
        std::thread(std::bind(&ProgressActionServer::execute,this,goal_handle)).detach();
    }

    
private:
    rclcpp_action::Server<Progress>::SharedPtr server_;

};

int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    rclcpp::spin(std::make_shared<ProgressActionServer>());
    // 资源释放
    rclcpp::shutdown();
    return 0;
}