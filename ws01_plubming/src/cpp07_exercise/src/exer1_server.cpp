/*
需求：订阅发布方发布的消息，并输出到终端
步骤：
1.包含头文件
2.初始化 ROS2 客户端
3.定义节点类

4.调用 spin 函数，并传入节点对象指针
5.释放资源
*/
#include "rclcpp/rclcpp.hpp"
#include "turtlesim_msgs/msg/pose.hpp"
#include "base_interfeces/srv/distance.hpp"

using std::placeholders::_1;
using std::placeholders::_2;
using base_interfeces::srv::Distance;

// 自定义节点类
class ExerServer: public rclcpp::Node{
public:
    ExerServer():Node("exerserver_node_cpp"),x(0.0),y(0.0){
        RCLCPP_INFO(this->get_logger(),"服务端创建");
        // 创建一个订阅方
        sub_ = this->create_subscription<turtlesim_msgs::msg::Pose>("/turtle1/pose",10,std::bind(&ExerServer::pose_cb,this,_1));
        // 创建一个服务端
        server_ = this->create_service<Distance>("distance",std::bind(&ExerServer::distance_cb,this,_1,_2)); 
        // 回调函数解析客户端数据并响应结果到客户端
    }

private:
    rclcpp::Subscription<turtlesim_msgs::msg::Pose>::SharedPtr sub_;
    rclcpp::Service<Distance>::SharedPtr server_;
    float x,y;
    void pose_cb(const turtlesim_msgs::msg::Pose::SharedPtr pose){
        x = pose->x;
        y = pose->y;
    }

    void distance_cb(const Distance::Request::SharedPtr request,Distance::Response::SharedPtr response){
        // 解析出目标点坐标
        float goal_x = request->x;
        float goal_y = request->y;
        // 计算距离
        float distance_x = goal_x - x;
        float distance_y = goal_y - y;
        float distance = std::sqrt(distance_x * distance_x + distance_y * distance_y);
        // 设置进响应
        response->distance = distance;
        RCLCPP_INFO(this->get_logger(),
                    "目标点坐标(%.2f,%.2f),原生乌龟坐标(%.2f,%.2f),二者距离(%.2f)",
                    goal_x,goal_y,x,y,distance
        );
    }
};

int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    rclcpp::spin(std::make_shared<ExerServer>());
    // 资源释放
    rclcpp::shutdown();
    return 0;
}