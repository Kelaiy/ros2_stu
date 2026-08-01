/* 
    需求：订阅发布方发布的消息 在终端输出
*/

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"


// 自定义节点类
class Listener: public rclcpp::Node{
public:
    Listener():Node("listener_node_cpp"){
        RCLCPP_INFO(this->get_logger(),"订阅方创建!");
        // 创建订阅方 模块:消息类型 参数:1.话题名称 2.QOS队列长度 3.回调函数 返回值: 订阅对象指针
        subscription_ = this->create_subscription<std_msgs::msg::String>("chatter",10,std::bind(&Listener::do_cb,this,std::placeholders::_1));

    }
private:
    void do_cb(const std_msgs::msg::String &msg){
        // 解析输出数据
        RCLCPP_INFO(this->get_logger(),"订阅到的消息:%s",msg.data.c_str());

    }
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);

    // 调用spin函数 传入对象指针
    rclcpp::spin(std::make_shared<Listener>());

    // 资源释放
    rclcpp::shutdown();
    return 0;
}
