/*
需求：客户端 修改服务端参数
步骤：
1.包含头文件
2.初始化 ROS2 客户端
3.定义节点类
增删改查

4.调用 spin 函数，并传入节点对象指针
5.释放资源
*/
#include "rclcpp/rclcpp.hpp"


using namespace std::chrono_literals;
// 自定义节点类
class ParamClient: public rclcpp::Node{
public:
    // 允许删除
    ParamClient():Node("ParamClient_node_cpp",rclcpp::NodeOptions().allow_undeclared_parameters(true)){
      RCLCPP_INFO(this->get_logger(),"参数客户端创建");
      // 创建参数客户端对象 参数1:当前对象依赖的节点 参数2: 参数服务端的节点名称 
      param_client_ = std::make_shared<rclcpp::SyncParametersClient>(this,"paramserver_node_cpp");
    }
    // 连接服务端
    bool connect_server(){
      while (!param_client_->wait_for_service(1s)){
        if(!rclcpp::ok()){
          return false;
        }
        RCLCPP_INFO(this->get_logger(),"服务连接中...");
      }
      
      return true;
    }
    // 查询参数
    void get_param(){
      RCLCPP_INFO(this->get_logger(),"--------------------查询参数--------------------");
      // 获取单个参数
      std::string car_name = param_client_->get_parameter<std::string>("car_name");
      double width = param_client_->get_parameter<double>("width");
      RCLCPP_INFO(this->get_logger(),"car_name = %s",car_name.c_str());
      RCLCPP_INFO(this->get_logger(),"width = %.2f",width);
      // 获取多个参数
      auto params = param_client_->get_parameters({"car_name","width","wheels"});
      for(auto &&param : params){
        RCLCPP_INFO(this->get_logger(),"%s = %s",param.get_name().c_str(),param.value_to_string().c_str());
      }
      // 是否包含参数
      RCLCPP_INFO(this->get_logger(),"包含car_name?%d",param_client_->has_parameter("car_name"));
      RCLCPP_INFO(this->get_logger(),"包含hzc吗%d",param_client_->has_parameter("hzc"));
    }
    // 修改参数
    void update_param(){
      RCLCPP_INFO(this->get_logger(),"--------------------参数修改--------------------");
      param_client_->set_parameters({
        rclcpp::Parameter("car_name","zqq"),
        rclcpp::Parameter("width",3.0),
        rclcpp::Parameter("length",5.0)     //设置参数服务端不存在的参数
      });
      RCLCPP_INFO(this->get_logger(),"新设置的参数:%.2f",param_client_->get_parameter<double>("length"));
    }

private:
    rclcpp::SyncParametersClient::SharedPtr param_client_;
};

int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    auto client = std::make_shared<ParamClient>();
    bool flag = client->connect_server();
    if(!flag){
      return 0;
    }
    client->get_param();
    client->update_param();
    client->get_param();
    // 资源释放
    rclcpp::shutdown();
    return 0;
}