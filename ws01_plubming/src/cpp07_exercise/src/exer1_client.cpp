/*
需求：解析客户端提交的目标点坐标 并解析响应结果
步骤：
0 解析动态传入的数据 作为目标点坐标
1.包含头文件
2.初始化 ROS2 客户端
3.定义节点类

5.释放资源
*/
#include "rclcpp/rclcpp.hpp"
#include "turtlesim_msgs/msg/pose.hpp"
#include "base_interfeces/srv/distance.hpp"

using base_interfeces::srv::Distance;
using namespace std::chrono_literals;
// 自定义节点类
class ExerClient: public rclcpp::Node{
public:
    ExerClient():Node("exerclient_node_cpp"){
        RCLCPP_INFO(this->get_logger(),"客户端创建");
        // 构造函数创建客户端
        client_ = this->create_client<Distance>("distance");
    }
    // 客户端连接服务端
    bool connect_server(){
        while (!client_->wait_for_service(1s)){
            if(!rclcpp::ok()){
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"节点被强制退出");
                return false;
            }
            RCLCPP_INFO(this->get_logger(),"服务连接中...");
        }
        return true;
    }

    // 发送请求数据
    rclcpp::Client<Distance>::FutureAndRequestId send_goal(float x,float y,float theta){
        auto request = std::make_shared<Distance::Request>();
        request->x = x;
        request->y = y;
        request->theta = theta;
        return client_->async_send_request(request);
    }

private:
    rclcpp::Client<Distance>::SharedPtr client_;

};

int main(int argc, char const *argv[])
{
    // 判断参数
    if ((argc != 5)){
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"清提交x坐标,y坐标与theta三个参数");
        return 1;
    }
    // 解析提交的参数
    float goal_x = atof(argv[1]);
    float goal_y = atof(argv[2]);
    float goal_theta = atof(argv[3]);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"%.2f,%.2f,%.2f",goal_x,goal_y,goal_theta);
    
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用节点对象指针函数
    auto client = std::make_shared<ExerClient>();
    bool flag = client->connect_server();
    if (!flag){
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"服务连接失败");
        return 1;
    }
    // 发送请求
    auto future = client->send_goal(goal_x,goal_y,goal_theta);
    // 响应状态
    if(rclcpp::spin_until_future_complete(client,future) == rclcpp::FutureReturnCode::SUCCESS){
        RCLCPP_INFO(client->get_logger(),"王八距离%.2f米",future.get()->distance);        
    }else{
        RCLCPP_ERROR(client->get_logger(),"服务响应失败");
    }
    rclcpp::spin(client);
    // 资源释放
    rclcpp::shutdown();
    return 0;
}