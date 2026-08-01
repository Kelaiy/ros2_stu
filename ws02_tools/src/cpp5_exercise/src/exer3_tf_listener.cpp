/*
需求： 监听坐标变换广播的数据 生成turtle1 相对于turtle2的坐标数据 在生成控制turtle2运动的速度指令
创建：
步骤：
1.包含头文件
2.初始化 ROS2 客户端
3.定义节点类

4.调用 spin 函数，并传入节点对象指针
5.释放资源
*/
#include "rclcpp/rclcpp.hpp"
#include "tf2_ros/buffer.hpp"
#include "tf2_ros/transform_listener.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;

// 自定义节点类
class Exer3TFListener: public rclcpp::Node{
public:
    Exer3TFListener():Node("Exer3TFListener_node_cpp"){
        // 声明参数服务
        this->declare_parameter("father_frame","turtle2");
        this->declare_parameter("child_frame","turtle1");
        father_frame = this->get_parameter("father_frame").as_string();
        child_frame = this->get_parameter("child_frame").as_string();
        // 创建缓存
        buffer_ = std::make_shared<tf2_ros::Buffer>(this->get_clock());
        // 监听器
        listener_ = std::make_shared<tf2_ros::TransformListener>(*buffer_);
        // 创建速度发布方
        cmd_pub_  = this->create_publisher<geometry_msgs::msg::Twist>("/"+ father_frame +"/cmd_vel",10);
        // 创建定时器 实现坐标变换 并且生成速度指令并发布
        timer_ = this->create_wall_timer(1s,std::bind(&Exer3TFListener::on_timer,this));

    }
private:
    void on_timer(){
        try{
            // 坐标变换
            auto ts = buffer_->lookupTransform(father_frame,child_frame,tf2::TimePointZero);
            // 组织发布速度指令
            geometry_msgs::msg::Twist twist;
            // 设置字段 计算 线速度=系数 * 开方(x平方+y平方) 角速度=系数 * 反正切(y/x)
            twist.linear.x = 0.5 * sqrt(
                pow(ts.transform.translation.x,2)+
                pow(ts.transform.translation.y,2));
            twist.angular.z = 1.0 * atan2(
                ts.transform.translation.y,
                ts.transform.translation.x);
            cmd_pub_->publish(twist);
        }catch(const tf2::LookupException& e){
            RCLCPP_INFO(this->get_logger(),"异常:%s",e.what());
        }
        
    }
    std::string father_frame;
    std::string child_frame;
    std::shared_ptr<tf2_ros::Buffer> buffer_;
    std::shared_ptr<tf2_ros::TransformListener> listener_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_pub_; 
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    rclcpp::spin(std::make_shared<Exer3TFListener>());
    // 资源释放
    rclcpp::shutdown();
    return 0;
}