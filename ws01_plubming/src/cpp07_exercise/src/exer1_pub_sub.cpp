/*
需求：  订阅乌龟1的位姿 解析线速度角速度 生成并发布控制乌龟2运动的速度指令

订阅话题 turtle1/pose
订阅消息 turtlesim_msgs/msg/Pose
hzc@hzc-R9000P2021:~/linux/ros2/stu/ws01_plubming$ ros2 interface proto turtlesim_msgs/msg/Pose 
"
x: 0.0
y: 0.0
theta: 0.0
linear_velocity: 0.0
angular_velocity: 0.0
"

发布话题：/t2/turtle1/cmd_vel
发布消息：geometry_msgs/msg/Twist

hzc@hzc-R9000P2021:~/linux/ros2/stu/ws01_plubming$ ros2 interface proto geometry_msgs/msg/Twist
"
linear:
  x: 0.0 前后
  y: 0.0 左右
  z: 0.0 上下
angular:
  x: 0.0 翻滚
  y: 0.0 俯仰 
  z: 0.0 左右转
"
BUG 需要改原码

步骤：
1.包含头文件
2.初始化 ROS2 客户端
3.定义节点类

4.调用 spin 函数，并传入节点对象指针
5.释放资源
*/
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim_msgs/msg/pose.hpp" 

// 自定义节点类
class Exer01PubSub: public rclcpp::Node{
public:
    Exer01PubSub():Node("exer01_pubsub_node_cpp"){
      RCLCPP_INFO(this->get_logger(),"对象创建");
      // 创建发布方
      pub_ = this->create_publisher<geometry_msgs::msg::Twist>(
        "/t2/turtle1/cmd_vel",
        10
      );
      // 创建订阅方
      sub_ = this->create_subscription<turtlesim_msgs::msg::Pose>(
        "turtle1/pose",
        10,
        std::bind(&Exer01PubSub::pose_cb,this,std::placeholders::_1)
      );
    }
private:
    void pose_cb(const turtlesim_msgs::msg::Pose & pose){
      // 订阅方的回调函数 处理速度 生成发布控制乌龟2的速度指令
      // 创建速度指令
      geometry_msgs::msg::Twist twist;
      twist.linear.x = pose.linear_velocity;
      twist.angular.z = -pose.angular_velocity;
      // 发布
      pub_->publish(twist);
    }
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_;
    rclcpp::Subscription<turtlesim_msgs::msg::Pose>::SharedPtr sub_;
  
};

int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    rclcpp::spin(std::make_shared<Exer01PubSub>());
    // 资源释放
    rclcpp::shutdown();
    return 0;
}