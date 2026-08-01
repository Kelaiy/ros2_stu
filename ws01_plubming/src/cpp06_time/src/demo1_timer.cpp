#include "rclcpp/rclcpp.hpp"


using namespace std::chrono_literals;
// 自定义节点类
class MyNode: public rclcpp::Node{
public:
    MyNode():Node("time_node_cpp"){
      // demo_rate();
      // demo_time();
      // demo_duration();
      demo_opt();
      
    }
private:
    // Rate使用
    void demo_rate(){
        // 创建Rate对象
        rclcpp::Rate rate1(500ms);  //设置休眠时间
        rclcpp::Rate rate2(1.0);    //设置执行频率
        // 调用Rate的sleep函数
        while (rclcpp::ok())
        {
            RCLCPP_INFO(this->get_logger(),"----------------------");
            rate2.sleep();
        }  
    }

    void demo_time(){
        // 创建time对象
        rclcpp::Time t1(500000000L);
        rclcpp::Time t2(2,500000000L);
        rclcpp::Time right_now = this->now();

        // 调用time对象
        RCLCPP_INFO(this->get_logger(),"s = %.2f,ns = %ld",t1.seconds(),t1.nanoseconds());
        RCLCPP_INFO(this->get_logger(),"s = %.2f,ns = %ld",t2.seconds(),t2.nanoseconds());
        RCLCPP_INFO(this->get_logger(),"s = %.2f,ns = %ld",right_now.seconds(),t1.nanoseconds());
    }

    // 持续时间
    void demo_duration(){
        // 创建Duration对象
        rclcpp::Duration du1(1s);
        rclcpp::Duration du2(2,500000000);
        // 调用函数
        RCLCPP_INFO(this->get_logger(),"s = %.2f,ns = %ld",du1.seconds(),du1.nanoseconds());
        RCLCPP_INFO(this->get_logger(),"s = %.2f,ns = %ld",du2.seconds(),du2.nanoseconds());


    }

    // 运算符使用
    void demo_opt(){
      rclcpp::Time t1(10,0);
      rclcpp::Time t2(30,0);

      rclcpp::Duration du1(8,0);
      rclcpp::Duration du2(17,0);

      // 比较运算
      RCLCPP_INFO(this->get_logger(),"t1>=t2 ? %d",t1 >= t2);
      RCLCPP_INFO(this->get_logger(),"t1<t2 ? %d",t1 < t2);

      // 数字运算
      rclcpp::Duration du3 = t2 -t1;
      rclcpp::Time t3 = t1 + du1;
      rclcpp::Time t4 = t1 - du1;
      RCLCPP_INFO(this->get_logger(),"du3 = %.2f",du3.seconds());
      RCLCPP_INFO(this->get_logger(),"t3 = %.2f",t3.seconds());
      RCLCPP_INFO(this->get_logger(),"t4 = %.2f",t4.seconds());

      RCLCPP_INFO(this->get_logger(),"du1 >= du2 ? %d",du1 >= du2);
      RCLCPP_INFO(this->get_logger(),"du1 < du2 ? %d",du1 < du2);
      rclcpp::Duration du4 = du1 *3;
      RCLCPP_INFO(this->get_logger(),"du4 = %.2f",du4.seconds());
    }

};

int main(int argc, char const *argv[])
{
    // 初始化ROS2客户端 
    rclcpp::init(argc,argv);
    // 调用spin函数 传入对象指针
    rclcpp::spin(std::make_shared<MyNode>());
    // 资源释放
    rclcpp::shutdown();
    return 0;
}