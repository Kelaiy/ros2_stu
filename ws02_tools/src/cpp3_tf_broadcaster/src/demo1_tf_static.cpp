/*
需求：  实现静态坐标变换广播器  
  ros2 run 包 可执行文件 x y z roll pitch yaw frame child_frame
创建： ros2 pkg create cpp3_tf_broadcaster --build-type ament_cmake --dependencies rclcpp tf2 tf2_ros geometry_msgs --node-name demo1_tf_static
步骤：
1.包含头文件
2.初始化 ROS2 客户端
3.定义节点类

4.调用 spin 函数，并传入节点对象指针
5.释放资源
*/
#include "rclcpp/rclcpp.hpp"
#include "tf2_ros/static_transform_broadcaster.hpp"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "tf2/LinearMath/Quaternion.hpp"

// 自定义节点类
class TFStatic: public rclcpp::Node{
public:
    TFStatic(char * argv[]):Node("tf_static_node_cpp"){
        // 创建广播对象
        broadcaster_ = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);
        // 组织并发布数据
        pub_static_tf(argv);


    }
private:
    std::shared_ptr<tf2_ros::StaticTransformBroadcaster> broadcaster_;
    void pub_static_tf(char * argv[]){
        // 组织消息
        geometry_msgs::msg::TransformStamped transform;
        transform.header.stamp = this->now();     // 时间戳  时间
        transform.header.frame_id = argv[7];      // 父级坐标系
        transform.child_frame_id = argv[8];       // 子级坐标系
        // 设置偏移量
        transform.transform.translation.x = atof(argv[1]);
        transform.transform.translation.y = atof(argv[2]);
        transform.transform.translation.z = atof(argv[3]);
        // 设置四元数
        // 将欧拉角转换成四元数
        tf2::Quaternion qtn;
        qtn.setRPY(atof(argv[4]),atof(argv[5]),atof(argv[6]));
        transform.transform.rotation.x = qtn.x();        
        transform.transform.rotation.y = qtn.y();        
        transform.transform.rotation.z = qtn.z();        
        transform.transform.rotation.w = qtn.w();        
        // 发布
        broadcaster_->sendTransform(transform);

    }
};

int main(int argc, char *argv[])
{
  // 传入合法参数
  if (argc != 9){
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"传入合法参数！");
      return 1;
  }
    
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    rclcpp::spin(std::make_shared<TFStatic>(argv));
    // 资源释放
    rclcpp::shutdown();
    return 0;
}