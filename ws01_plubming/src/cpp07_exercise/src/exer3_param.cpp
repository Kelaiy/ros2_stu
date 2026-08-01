/*
需求：修改turtlesim_node背景色
步骤：
1.包含头文件
2.初始化 ROS2 客户端
3.定义节点类

4.调用 spin 函数，并传入节点对象指针
5.释放资源
*/
#include "rclcpp/rclcpp.hpp"


using namespace std::chrono_literals;

// 自定义节点类
class Exer3Param: public rclcpp::Node{
public:
    Exer3Param():Node("exer3_param_node_cpp"){
        RCLCPP_INFO(this->get_logger(),"参数客户端");
        // 创建参数客户端
        client_ = std::make_shared<rclcpp::SyncParametersClient>(this,"turtlesim");
    }
    // 连接服务端
    bool connct_server(){
        while (!client_->wait_for_service(1s)){
            if(!rclcpp::ok()){
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"客户端强制退出");
                return false;
            }
            RCLCPP_INFO(this->get_logger(),"服务连接中");
        }
        

        return true;
    }
    // 更新参数
    void update_param(){
        // 背景色递进修改
        // 获取参数
        int red = client_->get_parameter<int>("background_r");
        // 循环 修改参数
        rclcpp::Rate rate(30.0);
        int count = red;
        while (rclcpp::ok()){
            // red += 5;
            count <= 255? red += 5: red -= 5;
            count += 5;
            if(count > 511) count =0;
            // 修改服务函数
            client_->set_parameters({rclcpp::Parameter("background_r",red)});
            rate.sleep();
        }
         
    }

private:
    rclcpp::SyncParametersClient::SharedPtr client_;
};

int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    auto client = std::make_shared<Exer3Param>();
    if(!client->connct_server()){

    }
    client->update_param();
    // 资源释放
    rclcpp::shutdown();
    return 0;
}