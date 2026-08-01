/*
需求：动作客户端能够发送一个真心数据=====整形数字 处理服务端的的持续反馈 和最终结果
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
using namespace std::chrono_literals;
using std::placeholders::_1;
using std::placeholders::_2;

// 自定义节点类
class ProgressActionClient: public rclcpp::Node{
public:
    ProgressActionClient():Node("progress_actionclient_node_cpp"){
        RCLCPP_INFO(this->get_logger(),"action 客户端创建");
        // 创建动作客户端
        client_ = rclcpp_action::create_client<Progress>(this,"get_sum");
    }
    // 发送请求
    void send_goal(int num){
        // 确保连接服务端
        if (!client_->wait_for_action_server(10s)){
            RCLCPP_INFO(this->get_logger(),"服务连接失败");
            return;
        }
        // 发送具体请求
        auto goal = Progress::Goal();
        goal.num = num;
        rclcpp_action::Client<Progress>::SendGoalOptions options;
        options.goal_response_callback = std::bind(&ProgressActionClient::goal_response_callback,this,_1);
        options.feedback_callback = std::bind(&ProgressActionClient::feedback_callback,this,_1,_2);
        options.result_callback = std::bind(&ProgressActionClient::result_callback,this,_1);
        auto future = client_->async_send_goal(goal,options);
    }
    // 处理关于目标值的服务端回应(回调函数)
    /* 
        using GoalHandle = ClientGoalHandle<ActionT>;
        using GoalResponseCallback = std::function<void (typename GoalHandle::SharedPtr)>;
    */
    void goal_response_callback(rclcpp_action::ClientGoalHandle<Progress>::SharedPtr goal_handle){
        if(!goal_handle){
            RCLCPP_INFO(this->get_logger(),"目标请求被服务端拒绝");
        }else{
            RCLCPP_INFO(this->get_logger(),"目标处理中");
        }
    }

    // 处理连续反馈(回调函数)
    /* 
        std::function<void (
        typename ClientGoalHandle<ActionT>::SharedPtr,
        const std::shared_ptr<const Feedback>)>;
    */
    void feedback_callback(rclcpp_action::ClientGoalHandle<Progress>::SharedPtr goal_handle,const std::shared_ptr<const Progress::Feedback> feedback){
        (void)goal_handle;
        double progress = feedback->progress;
        int pro = (int)(progress * 100);
        RCLCPP_INFO(this->get_logger(),"当前进度:%d%%",pro);
    }

    // 处理最终响应(回调函数)
    /* 
        std::function<void (const WrappedResult & result)>
    */
    void result_callback(const rclcpp_action::ClientGoalHandle<Progress>::WrappedResult & result){
        // 状态码判断最终状态
        if(result.code == rclcpp_action::ResultCode::SUCCEEDED){
            RCLCPP_INFO(this->get_logger(),"最终结果:%d",result.result->sum);
        }else if (result.code == rclcpp_action::ResultCode::ABORTED){
            RCLCPP_INFO(this->get_logger(),"被中断");
        }else if (result.code == rclcpp_action::ResultCode::CANCELED) 
        {
            RCLCPP_INFO(this->get_logger(),"被取消");
        }else{
            RCLCPP_INFO(this->get_logger(),"为知异常");
        }
    }

private:
    rclcpp_action::Client<Progress>::SharedPtr client_;

};

int main(int argc, char const *argv[])
{
    if(argc != 2){
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"提交一个整型数据");
    }
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    auto node = std::make_shared<ProgressActionClient>();
    node ->send_goal(atoi(argv[1]));
    rclcpp::spin(node);
    // 资源释放
    rclcpp::shutdown();
    return 0;
}