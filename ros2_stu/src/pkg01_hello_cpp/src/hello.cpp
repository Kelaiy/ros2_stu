/*
输出hello world

创建
ros2 pkg create pk01_hello_cpp --build-type ament_cmake --dependencies rclcpp --node-name hello 
编译
colcon build --packages-select pkg01_hello_cpp

sourc install/setup.bash
运行
ros2 run pkg01_hello_cpp hello


参考 CMakeLists.txt 增加hello2.cpp

*/
#include "rclcpp/rclcpp.hpp"
/* 
int main([[maybe_unused]] int argc, [[maybe_unused]] char ** argv)
{
  // 初始化ROS2客户端
  rclcpp::init(argc,argv);

  // 创建节点
  auto node = rclcpp::Node::make_shared("hello_node_cpp");

  // 输出日志
  RCLCPP_INFO(node->get_logger(),"hello vscode ......");

  // 释放资源
  rclcpp::shutdown();
}

 */

//自定义类继承 Node
class MyNode: public rclcpp::Node{
public:
        MyNode():Node("hello_node_cpp"){
                RCLCPP_INFO(this->get_logger(),"hello world!(继承)");
        }
};


//自定义继承 Node
int main(int argc, char const *argv[]) {
  //初始化
  rclcpp::init(argc,argv);

  //实例化自定义类
  auto node = std::make_shared<MyNode>();
  //...

  //资源释放
  rclcpp::shutdown();

  return 0;
}


