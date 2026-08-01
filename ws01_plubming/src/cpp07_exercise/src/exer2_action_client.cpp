/*
需求：订阅发布方发布的消息，并输出到终端
步骤：
1.包含头文件
2.初始化 ROS2 客户端
3.定义节点类

4.调用 spin 函数，并传入节点对象指针
5.释放资源
*/
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "base_interfeces/action/nav.hpp"


using base_interfeces::action::Nav;
using namespace std::chrono_literals;
using std::placeholders::_1;
using std::placeholders::_2;
// 自定义节点类
class Exer2ActionClient: public rclcpp::Node{
public:
    Exer2ActionClient():Node("exer2_actionclient_node_cpp"){
        RCLCPP_INFO(this->get_logger(),"动作客户端");
        // 创建动作客户端
        client_ = rclcpp_action::create_client<Nav>(this,"nav");


    }
    // 连接服务端发送请求
    void send_goal(float x,float y,float theta){
        // 连接服务端
        if(!client_->wait_for_action_server(10s)){
            RCLCPP_INFO(this->get_logger(),"服务连接超时");
            return;
        }
        // 组织并发送数据
        Nav::Goal goal;
        goal.goal_x = x;
        goal.goal_y = y;
        goal.goal_theta = theta;
        rclcpp_action::Client<Nav>::SendGoalOptions options;
        // std::function<void (std::shared_ptr<rclcpp_action::ClientGoalHandle<base_interfeces::action::Nav>>)
        options.goal_response_callback = std::bind(&Exer2ActionClient::goal_response_callback,this,_1);
        // std::function<void (std::shared_ptr<rclcpp_action::ClientGoalHandle<base_interfeces::action::Nav>>, std::shared_ptr<const base_interfeces::action::Nav_Feedback>)
        options.feedback_callback = std::bind(&Exer2ActionClient::feedback_callback,this,_1,_2);        
        // std::function<void (const rclcpp_action::ClientGoalHandle<base_interfeces::action::Nav>::WrappedResult &result)
        options.result_callback = std::bind(&Exer2ActionClient::result_callback,this,_1);
        client_->async_send_goal(goal,options);
    }
    // 处理目标值相关响应结果
    void goal_response_callback(std::shared_ptr<rclcpp_action::ClientGoalHandle<Nav>> goal_handle){
        if (!goal_handle){
            RCLCPP_INFO(this->get_logger(),"请求目标非法");
        }
        RCLCPP_INFO(this->get_logger(),"目标值被接收");
        
    }
    // 处理持续
    void feedback_callback(std::shared_ptr<rclcpp_action::ClientGoalHandle<Nav>> goal_handle, std::shared_ptr<const Nav::Feedback> feedback){
        (void)goal_handle;
        RCLCPP_INFO(this->get_logger(),"剩余距离:%.2f米",feedback->distance);
    }
    // 处理最终响应
    void result_callback(const rclcpp_action::ClientGoalHandle<Nav>::WrappedResult &result){
        if (result.code == rclcpp_action::ResultCode::SUCCEEDED){
            // 成功响应
            RCLCPP_INFO(this->get_logger(),"王八最终信息坐标:(%.2f,%.2f),航向:%.2f",result.result->tutle_x,result.result->tutle_y,result.result->tutle_thrta);
        }else{
            // 失败
            RCLCPP_INFO(this->get_logger(),"响应失败");
        }
        
    }
private:
    rclcpp_action::Client<Nav>::SharedPtr client_;

    
};

int main(int argc, char const *argv[])
{
    if(argc != 5){
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"请输入目标点数据x,y");
        return 1;
    }
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    auto client = std::make_shared<Exer2ActionClient>();
    client->send_goal(atof(argv[1]),atof(argv[2]),atof(argv[3]));
    rclcpp::spin(client);
    // 资源释放
    rclcpp::shutdown();
    return 0;
}