/*
需求：  客户端实现 发送请求生成一只新的小乌龟
创建：
步骤：
1.包含头文件
2.初始化 ROS2 客户端
3.定义节点类

4.调用 spin 函数，并传入节点对象指针
5.释放资源
*/
#include "rclcpp/rclcpp.hpp"
#include "turtlesim_msgs/srv/spawn.hpp"

using namespace std::chrono_literals;
// 自定义节点类
class Exer1Spawn: public rclcpp::Node{
public:
    Exer1Spawn():Node("exer1_spawn_node_cpp"){
        // 参数服务声明新的乌龟信息
        this->declare_parameter("x",3.0);
        this->declare_parameter("y",3.0);
        this->declare_parameter("theta",0.0);
        this->declare_parameter("turtle_name","turtle2");
        x = this->get_parameter("x").as_double();
        y = this->get_parameter("y").as_double();
        theta = this->get_parameter("theta").as_double();
        turtle_name = this->get_parameter("turtle_name").as_string();
        // 创建服务客户端
        spawn_client_ = this->create_client<turtlesim_msgs::srv::Spawn>("/spawn");
    }   

    // 连接服务端
    bool connect_server(){
        while (!spawn_client_->wait_for_service(1s)){
            if(!rclcpp::ok()){
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"强制退出");
                return false;
            }
            RCLCPP_INFO(this->get_logger(),"服务连接中");
        }
        return true;
    }
    // 组织发送数据
    rclcpp::Client<turtlesim_msgs::srv::Spawn>::FutureAndRequestId request(){
        auto req = std::make_shared<turtlesim_msgs::srv::Spawn::Request>();
        req->x = x;
        req->y = y;
        req->theta = theta;
        req->name = turtle_name; 

        /* 
            rclcpp::Client<turtlesim_msgs::srv::Spawn>::FutureAndRequestId 
            async_send_request(const std::shared_ptr<turtlesim_msgs::srv::Spawn_Request> &request)
        */
        
        return spawn_client_->async_send_request(req);
    }

private:
    double_t x,y,theta;
    std::string turtle_name;
    rclcpp::Client<turtlesim_msgs::srv::Spawn>::SharedPtr spawn_client_;
};

int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 创建自定义数据节点类对象 组织函数 处理响应结果
    auto client_ = std::make_shared<Exer1Spawn>();
    bool flag = client_->connect_server();
    if(!flag){
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"服务连接失败");
        return 1;
    }
    // 发送请求
    auto response = client_->request();
    // 处理响应
    if(rclcpp::spin_until_future_complete(client_,response) == rclcpp::FutureReturnCode::SUCCESS){
        RCLCPP_INFO(client_->get_logger(),"响应成功");
        // 生成新乌龟重名 会成功 但不会生成新乌龟 乌龟的名字是空串
        std::string name = response.get()->name;
        if(name.empty()){
            RCLCPP_INFO(client_->get_logger(),"生成乌龟重名导致失败");
        }else{
            RCLCPP_INFO(client_->get_logger(),"生成成功");
        }
    }else{
        RCLCPP_INFO(client_->get_logger(),"响应失败");
    }
    // 资源释放
    rclcpp::shutdown();
    return 0;
}