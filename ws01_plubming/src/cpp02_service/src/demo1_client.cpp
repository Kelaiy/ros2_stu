/*
需求：创建客户端 组织数据并提交 然后处理响应结果
步骤：
1.包含头文件
2.初始化 ROS2 客户端
3.定义节点类

4.调用 spin 函数，并传入节点对象指针
5.释放资源
*/
#include "rclcpp/rclcpp.hpp"
#include "base_interfeces/srv/addints.hpp"

using base_interfeces::srv::Addints;
using namespace std::chrono_literals;


// 自定义节点类
class AddIntsClient: public rclcpp::Node{
public:
    AddIntsClient():Node("addints_client_node_cpp"){
        RCLCPP_INFO(this->get_logger(),"客户端节点创建");
        //  创建客户端 模板 服务接口 参数:服务话题名称 返回值 服务对象指针
        client_ = this->create_client<Addints>("add_ints");
    }

    // 成功true 失败flase
    bool connect_server(){
        // 指定时间内连接服务器 连接上 返回true 失败false 1s为超时时间
        while(!client_->wait_for_service(2s)){

            // ctrl+c 处理 
            if (!rclcpp::ok())
            {
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"强行终止客户端");
                return false;
            }
            
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"服务器连接中");
        }
        return true;
    }

    // 发送函数 参数俩个整形 返回值是提交请求后服务端的返回结果
    rclcpp::Client<Addints>::FutureAndRequestId send_request(int num1,int num2){
        // 组织请求数据

        // 发送
        auto request = std::make_shared<Addints::Request>(); 
        request->num1 = num1;
        request->num2 = num2;
        return client_->async_send_request(request);
    }

private:
    rclcpp::Client<Addints>::SharedPtr client_; 

};


int main(int argc, char const *argv[])
{
    if(argc != 3)
    {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"),"请求提交俩个整形数字");
        return 1;
    }

    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 创建客户端对象
    auto client = std::make_shared<AddIntsClient>();
    // 调用客户端对象连接服务器的功能
    bool flag = client->connect_server();
    // 连接结果判断
    if (!flag)
    {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"服务器连接失败 程序退出");
        return 0;
    }
    // 调用请求提交函数 接收并处理响应结果
    auto future = client->send_request(atoi(argv[1]),atoi(argv[2]));
    // 处理响应
    if (rclcpp::spin_until_future_complete(client,future) == rclcpp::FutureReturnCode::SUCCESS){      //成功
        RCLCPP_INFO(client->get_logger(),"响应成功! sum = %d",future.get()->sum);
    }else{      //失败
        RCLCPP_INFO(client->get_logger(),"连接失败");
    }

    // 资源释放
    rclcpp::shutdown();
    return 0;
}