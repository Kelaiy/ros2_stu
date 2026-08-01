/*
需求：创建参数服务端并操作参数
步骤：
1.包含头文件
2.初始化 ROS2 客户端
3.定义节点类
增删改查

4.调用 spin 函数，并传入节点对象指针
5.释放资源
*/
#include "rclcpp/rclcpp.hpp"



// 自定义节点类
class ParamServer: public rclcpp::Node{
public:
    // 允许删除
    ParamServer():Node("paramserver_node_cpp",rclcpp::NodeOptions().allow_undeclared_parameters(true)){
      RCLCPP_INFO(this->get_logger(),"参数服务端端创建");
    }
    // 增
    void declare_param(){
      RCLCPP_INFO(this->get_logger(),"--------------------增--------------------");
      this->declare_parameter("car_name","tiger");
      this->declare_parameter("width",1.55);
      this->declare_parameter("wheels",5);
      
      // 可以设置新参数但必须有 rclcpp::NodeOptions().allow_undeclared_parameters(true)
      this->set_parameter(rclcpp::Parameter("height",2.00));
    }
    // 删
    void del_param(){
      RCLCPP_INFO(this->get_logger(),"--------------------删--------------------");
      // this->undeclare_parameter("car_name"); //不能删除声明的参数
      this->undeclare_parameter("height");
      RCLCPP_INFO(this->get_logger(),"被删除height吗?%d",this->has_parameter("height"));
    }
    // 改
    void update_param(){
      RCLCPP_INFO(this->get_logger(),"--------------------改--------------------");
      this->set_parameter(rclcpp::Parameter("width",1.75));
      RCLCPP_INFO(this->get_logger(),"width:%.2f",this->get_parameter("width").as_double());
    }
    // 查
    void get_param(){
      RCLCPP_INFO(this->get_logger(),"--------------------查--------------------");
      // 获取指定参数
      auto car = this->get_parameter("car_name");
      RCLCPP_INFO(this->get_logger(),"key = %s,value = %s",car.get_name().c_str(),car.as_string().c_str());
      // 获取一些参数
      auto params = this->get_parameters({"car_name", "width","height"});
      for(auto &&param : params){
        RCLCPP_INFO(this->get_logger(),"(%s = %s)",param.get_name().c_str(),param.value_to_string().c_str());
      }
      // 判断是否包含
      RCLCPP_INFO(this->get_logger(),"是否包含car_name?%d",this->has_parameter("car_name"));
      RCLCPP_INFO(this->get_logger(),"是否包含hzc?%d",this->has_parameter("hzc"));
    }
};

int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    auto node = std::make_shared<ParamServer>();
    node->declare_param();
    node->get_param();
    node->update_param();
    node->del_param();
    rclcpp::spin(node);
    // 资源释放
    rclcpp::shutdown();
    return 0;
}