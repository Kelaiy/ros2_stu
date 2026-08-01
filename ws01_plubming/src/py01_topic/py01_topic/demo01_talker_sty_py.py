""" 
发布节点

"""

import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class MinimalPublisher(Node):
    def __init__(self):
        super().__init__('talker_node_py')
        # 创建发布方   参数 消息类型 主题 QOS消息长度 返回值 发布对象
        self.publishers_ = self.create_publisher(String,'chatter',10)
        self.get_logger().info("发布方创建了(python)")
        # 创建定时器 时间间隔 回调函数
        timer_period = 0.5
        self.timer = self.create_timer(timer_period,self.timer_callback)
        # 设置计数器
        self.i = 0

    def timer_callback(self):
        msg = String()
        msg.data = 'Hello World(py): %d' % self.i
        self.publishers_.publish(msg)
        self.get_logger().info('发布的消息: "%s"' % msg.data)
        self.i += 1


def main(args=None):
    # 初始化ROS2客户端
    rclpy.init(args=args)
    # 调用spin函数 传入节点对象
    minimal_publisher = MinimalPublisher()
    rclpy.spin(minimal_publisher)
    # 释放资源
    rclpy.shutdown()


if __name__ == '__main__':
    main()




