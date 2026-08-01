/*
需求：  发布相对于laser坐标系的坐标点数据

创建：
步骤：
1.包含头文件
2.初始化 ROS2 客户端
3.定义节点类

4.调用 spin 函数，并传入节点对象指针
5.释放资源
*/
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/point_stamped.hpp"

using namespace std::chrono_literals;
// 自定义节点类
class PointTF: public rclcpp::Node{
public:
    PointTF():Node("point_tf_node_cpp"),x(0.0){
        // 创建发布方
        poing_pub_ = this->create_publisher<geometry_msgs::msg::PointStamped>("point",10);
        // 创建定时器
        timer_ = this->create_wall_timer(1s,std::bind(&PointTF::on_timer,this));

    }

private:
    // 回调函数组织并发布消息
    void on_timer(){
        // 组织消息
        geometry_msgs::msg::PointStamped ps;
        ps.header.stamp = this->now();
        ps.header.frame_id = "laser";
        x += 0.05;
        ps.point.x = x;        
        ps.point.y = 0.0;        
        ps.point.z = -0.1;        
        // 发布消息
        poing_pub_->publish(ps);

    }
    rclcpp::Publisher<geometry_msgs::msg::PointStamped>::SharedPtr poing_pub_;
    rclcpp::TimerBase::SharedPtr timer_;
    double_t x;
};

int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    rclcpp::spin(std::make_shared<PointTF>());
    // 资源释放
    rclcpp::shutdown();
    return 0;
}