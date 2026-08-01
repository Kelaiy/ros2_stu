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
#include "base_interfeces/msg/student.hpp"



using base_interfeces::msg::Student;
// 自定义节点类
class ListenerStu: public rclcpp::Node{
public:
    ListenerStu():Node("listenerstu_node_cpp"){
        // 创建订阅方
        subscription_ = this->create_subscription<Student>("chatter_stu",10,std::bind(&ListenerStu::do_cb,this,std::placeholders::_1));
    }

private:
    void do_cb(const Student &stu)
    {
        RCLCPP_INFO(this->get_logger(),"订阅的学生信息:name=%s,age=%d,height=%.2f",stu.name.c_str(),stu.age,stu.height);
    }
    rclcpp::Subscription<Student>::SharedPtr subscription_;

};

int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    rclcpp::spin(std::make_shared<ListenerStu>());
    // 资源释放
    rclcpp::shutdown();
    return 0;
}