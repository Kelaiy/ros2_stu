/*
需求：演示api实现
创建
  ros2 pkg create cpp04_param --build-type ament_cmake --dependencies rclcpp --node-name demo0_param
步骤：
1.包含头文件
2.初始化 ROS2 客户端
3.定义节点类

4.调用 spin 函数，并传入节点对象指针
5.释放资源
*/
#include "rclcpp/rclcpp.hpp"



// 自定义节点类
class MyParam: public rclcpp::Node{
public:
    MyParam():Node("myparam_node_cpp"){
      RCLCPP_INFO(this->get_logger(),"参数API使用");
      // 参数对象创建
      rclcpp::Parameter p1("car_name","tiger");
      rclcpp::Parameter p2("height",1.68);
      rclcpp::Parameter p3("wheels",4);
      // 解析值
      RCLCPP_INFO(this->get_logger(),"car_name = %s",p1.as_string().c_str());
      RCLCPP_INFO(this->get_logger(),"height = %.2f",p2.as_double());
      RCLCPP_INFO(this->get_logger(),"wheels = %ld",p3.as_int());

      // 获取参数键
      RCLCPP_INFO(this->get_logger(),"name = %s",p1.as_string().c_str());
      RCLCPP_INFO(this->get_logger(),"type = %s",p1.get_type_name().c_str());
      RCLCPP_INFO(this->get_logger(),"value2string = %s",p2.value_to_string().c_str());

      rclcpp::ParameterValue value();

    }
};

int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    rclcpp::spin(std::make_shared<MyParam>());
    // 资源释放
    rclcpp::shutdown();
    return 0;
}