"""
需求：
创建：
流程：
1. 导包；
2. 初始化 ROS2 客户端；
3. 自定义节点类；
4. 调用 spin 函数，并传入节点对象；
5. 资源释放。
"""

# 1. 导包
import rclpy
from rclpy.node import Node
from tf2_ros.buffer import Buffer
from tf2_ros import TransformListener
from geometry_msgs.msg import Twist
import math


# 3. 自定义节点类
class Exer3TFListener(Node):
    def __init__(self):
        super().__init__('exer3tf_listener_node_py')
        # 声明解析参数
        self.declare_parameter("father_frame","turtle2")
        self.declare_parameter("child_frame","turtle1")
        self.father_frame = self.get_parameter("father_frame").get_parameter_value().string_value
        self.child_frame = self.get_parameter("child_frame").get_parameter_value().string_value
        # 创建缓存指针
        self.buffer = Buffer()
        # 创建监听器
        self.listener = TransformListener(self.buffer,self)
        # 创建速度发布方
        self.cmd_pub = self.create_publisher(Twist,self.father_frame + "/cmd_vel",10)
        # 创建定时器
        self.timer = self.create_timer(1.0,self.on_timer)

    def on_timer(self):
        if self.buffer.can_transform(self.father_frame,self.child_frame,rclpy.time.Time()):
            # 坐标变换      
            ts = self.buffer.lookup_transform(
                self.father_frame,
                self.child_frame,
                rclpy.time.Time())
        # 速度指令
        twist = Twist()
        twist.linear.x = 0.2 * math.sqrt(
            math.pow(ts.transform.translation.x,2) + 
            math.pow(ts.transform.translation.y,2))
        twist.angular.z = 1.0 * math.atan2(
            ts.transform.translation.y,
            ts.transform.translation.x
        )
        # 发布
        self.cmd_pub.publish(twist)
def main(args=None):
    # 2. 初始化 ROS2 客户端
    rclpy.init(args=args)

    # 4. 调用 spin 函数，并传入节点对象
    node = Exer3TFListener()
    rclpy.spin(node)

    # 5. 资源释放
    rclpy.shutdown()


if __name__ == '__main__':
    main()