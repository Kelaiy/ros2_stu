/*
需求：  ros2 pkg create cpp4_tf_listener --build-type ament_cmake --dependencies rclcpp tf2 tf2_ros geometry_msgs --node-name demo1_tf_listener
创建：先发布laser到base_link的坐标相对关系 在发布camera到base_link的坐标系关系 求laser到camera的坐标系关系
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


using namespace std::chrono_literals;
// 自定义节点类
class TFListener: public rclcpp::Node{
public:
    TFListener():Node("tf_listener_node_cpp"){
      // 创建一个缓存对象 融合多个坐标系相对关系为一棵坐标树
      buffer_ = std::make_unique<tf2_ros::Buffer>(this->get_clock());
      // 创建一个监听器 绑定缓存对象 将所有广播数据写入缓存
      listener_ = std::make_shared<tf2_ros::TransformListener>(*buffer_,this);
      // 定时器 循环读取
      timer_ = this->create_wall_timer(1s,std::bind(&TFListener::on_timer,this));
    }
private:
    void on_timer(){
      // 坐标系转换
      try{
        auto ts = buffer_->lookupTransform("camera","laser",tf2::TimePointZero);
        RCLCPP_INFO(this->get_logger(),"--------------转换完成的坐标帧信息--------------");
        RCLCPP_INFO(this->get_logger(),
            "新坐标帧:父坐标系:%s,子坐标系:%s,偏移量(%.2f,%.2f,%.2f)",
            ts.header.frame_id.c_str(), //camera
            ts.child_frame_id.c_str(),  //laser
            ts.transform.translation.x,
            ts.transform.translation.y,
            ts.transform.translation.z
        );
      }
      catch(const tf2::LookupException& e){
        RCLCPP_INFO(this->get_logger(),"异常处理:%s",e.what());
      }
      
    }
    std::unique_ptr<tf2_ros::Buffer> buffer_;
    std::shared_ptr<tf2_ros::TransformListener> listener_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    rclcpp::spin(std::make_shared<TFListener>());
    // 资源释放
    rclcpp::shutdown();
    return 0;
}