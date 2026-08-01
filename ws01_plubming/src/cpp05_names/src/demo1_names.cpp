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
#include "std_msgs/msg/string.hpp"


// 自定义节点类
class MyNode: public rclcpp::Node{
public:
    MyNode():Node("he_zuo","chun"){
        // 全局话题 和命名空间 节点名称无关
        // pub_ = this->create_publisher<std_msgs::msg::String>("/shi",10);
        // 相对话题
        // pub_ = this->create_publisher<std_msgs::msg::String>("xiangdui",10);
        // 私有话题
        pub_ = this->create_publisher<std_msgs::msg::String>("~/siyou",10);
    }
private:
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_;

};

int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    rclcpp::spin(std::make_shared<MyNode>());
    // 资源释放
    rclcpp::shutdown();
    return 0;
}