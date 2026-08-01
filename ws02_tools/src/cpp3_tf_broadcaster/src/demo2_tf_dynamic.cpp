/*
需求：  启动turtlesim_node 编写程序 发布tf坐标系 相对与窗体的tf
创建：
步骤：
1.包含头文件
2.初始化 ROS2 客户端
3.定义节点类

4.调用 spin 函数，并传入节点对象指针
5.释放资源
*/
#include "rclcpp/rclcpp.hpp"
#include "tf2_ros/transform_broadcaster.hpp"
#include "turtlesim_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "tf2/LinearMath/Quaternion.hpp"

using std::placeholders::_1;
// 自定义节点类
class TFDynamic: public rclcpp::Node{
public:
    TFDynamic():Node("tf_dynamic_node_cpp"){
        // 创建动态广播器
        broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this);
        // 创建乌龟位姿订阅方
        pose_sub_ = this->create_subscription<turtlesim_msgs::msg::Pose>("/turtle1/pose",10,
            std::bind(&TFDynamic::do_pose,this,_1)
        );
        // 回调函数 获取位姿 发布坐标系

    }
private:
    void do_pose(const turtlesim_msgs::msg::Pose & pose){
        // 组织消息
        geometry_msgs::msg::TransformStamped ts;

        ts.header.stamp = this->now();
        ts.header.frame_id = "word";

        ts.child_frame_id = "wangba";

        ts.transform.translation.x = pose.x;
        ts.transform.translation.y = pose.y;
        ts.transform.translation.z = 0.0;

        // 欧辣椒转四元数 wugui只有yaw取值
        tf2::Quaternion qtn;
        qtn.setRPY(0,0,pose.theta);

        ts.transform.rotation.x = qtn.x();
        ts.transform.rotation.y = qtn.y();
        ts.transform.rotation.z = qtn.z();
        ts.transform.rotation.w = qtn.w();
        
        // 发布
        broadcaster_->sendTransform(ts);
    }
    std::shared_ptr<tf2_ros::TransformBroadcaster> broadcaster_;
    rclcpp::Subscription<turtlesim_msgs::msg::Pose>::SharedPtr pose_sub_;
};

int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    rclcpp::spin(std::make_shared<TFDynamic>());
    // 资源释放
    rclcpp::shutdown();
    return 0;
}