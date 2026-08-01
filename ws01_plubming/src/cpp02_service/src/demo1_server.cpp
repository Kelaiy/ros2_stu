/*
需求：服务端实现 解析提交的请求的数据 将解析的数据相加并响应到客户端
步骤：
1.包含头文件
2.初始化 ROS2 服务端
3.定义节点类
  创建服务端
  回调函数解析并请求发送响应
4.调用 spin 函数，并传入节点对象指针
5.释放资源
*/
#include "rclcpp/rclcpp.hpp"
#include "base_interfeces/srv/addints.hpp"

using base_interfeces::srv::Addints;
using std::placeholders::_1;
using std::placeholders::_2;


// 自定义节点类
class AddIntsServer: public rclcpp::Node{
public:
    AddIntsServer():Node("addints_server_node_cpp"){
      RCLCPP_INFO(this->get_logger(),"服务端节点启动完毕,等到提交");
      // 创建服务端 参数 服务话题 回调函数 返回类型 服务对象指针
      server_ = this->create_service<Addints>("add_ints",std::bind(&AddIntsServer::add,this,_1,_2));

    }

private:
    // 回调函数
    void add(const Addints::Request::SharedPtr req,const Addints::Response::SharedPtr res){
      // 解析并发送响应
      res->sum = req->num1 + req->num2;
      RCLCPP_INFO(this->get_logger(),"%d+%d=%d",req->num1,req->num2,res->sum);
    }

    rclcpp::Service<Addints>::SharedPtr server_;

};



int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    rclcpp::spin(std::make_shared<AddIntsServer>());
    // 资源释放
    rclcpp::shutdown();
    return 0;
}