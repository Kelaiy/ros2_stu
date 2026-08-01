/*
输出hello world

创建
ros2 pkg create pk01_hello_cpp --build-type ament_cmake --dependenciles rclcpp --node-name hello 


*/
#include "rclcpp/rclcpp.hpp"

int main([[maybe_unused]] int argc, [[maybe_unused]] char ** argv)
{
  // 初始化ROS2客户端
  rclcpp::init(argc,argv);

  // 创建节点
  auto node = rclcpp::Node::make_shared("hello_node_cpp");

  // 输出日志
  RCLCPP_INFO(node->get_logger(),"hello vscode ......2");

  // 释放资源
  rclcpp::shutdown();
}
