/*
需求：订阅发布方发布的消息，学生信息
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
using namespace std::chrono_literals;
// 自定义节点类
class TalkerStu: public rclcpp::Node{
public:
    TalkerStu():Node("talkerstu_node_cpp"){
        // 创建发布方
        publisher_ = this->create_publisher<Student>("chatter_stu",10);
        // 创建定时器
        timer_ = this->create_wall_timer(500ms,std::bind(&TalkerStu::on_timer,this));
    }

private:
    void on_timer()
    {
        // 组织并发布学生消息
        auto stu = Student();
        stu.name = "hzc";
        stu.age = 21;
        stu.height = 1.8; 
        publisher_->publish(stu);
        RCLCPP_INFO(this->get_logger(),"发布的消息:(%s,%d,%.2f)",stu.name.c_str(),stu.age,stu.height);
    }
    // 成员变量 
    rclcpp::Publisher<Student>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    int age;
};

int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    rclcpp::spin(std::make_shared<TalkerStu>());
    // 资源释放
    rclcpp::shutdown();
    return 0;
}