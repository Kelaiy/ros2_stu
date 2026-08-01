/*
需求：录制乌龟控制的指令
创建 ros2 pkg create cpp2_rosbag --build-type ament_cmake --dependencies rclcpp rosbag2_cpp geometry_msgs --node-name demo1_writer
录制    ros2 bag record -o bdg_cmd --topics /turtle1/cmd_vel
回放    ros2 bag play bdg_cm
步骤：
1.包含头文件
2.初始化 ROS2 客户端
3.定义节点类

4.调用 spin 函数，并传入节点对象指针
5.释放资源
*/
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "rosbag2_cpp/writer.hpp"


using std::placeholders::_1;
// 自定义节点类
class SimpleBagRecirder: public rclcpp::Node{
public:
    SimpleBagRecirder():Node("simple_bagrecirder_node_cpp"){
        RCLCPP_INFO(this->get_logger(),"消息录制对象创建");
         // 创建录制对象
        writer_ = std::make_unique<rosbag2_cpp::Writer>();
        // 设置磁盘文件
        writer_->open("my_bag");
        // 写数据
        // writer_->write()
        sub_ = this->create_subscription<geometry_msgs::msg::Twist>("/turtle1/cmd_vel",10,std::bind(&SimpleBagRecirder::do_write_msg,this,_1));


    }
private:
    void do_write_msg(std::shared_ptr<rclcpp::SerializedMessage> msg){
        // 参数 被写出的消息 话题名称 消息类型 时间戳
        RCLCPP_INFO(this->get_logger(),"数据写出");
        writer_->write(msg,"/turtle1/cmd_vel","geometry_msgs/msg/Twist",this->now());
    }
    std::unique_ptr<rosbag2_cpp::Writer> writer_;
    rclcpp::Subscription<geometry_msgs::msg::Twist>::ConstSharedPtr sub_;

};

int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    rclcpp::spin(std::make_shared<SimpleBagRecirder>());
    // 资源释放
    rclcpp::shutdown();
    return 0;
}