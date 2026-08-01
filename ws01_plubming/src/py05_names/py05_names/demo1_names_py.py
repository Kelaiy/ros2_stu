"""
需求：订阅发布方发布的消息，并输出到终端
步骤：
1.导入模块
2.初始化 ROS2 客户端
3.定义节点类
4.调用 spin 函数
5.释放资源
"""

import rclpy
from rclpy.node import Node
from std_msgs.msg import String

#自定义节点类
class MyNode(Node):
    def __init__(self):
        super().__init__('mynode_node_py',namespace="t1_ns_py")
        # 全局话题
        # self.pub = self.create_publisher(String,"/shi",10)
        # 相对话题
        # self.pub = self.create_publisher(String,"shi",10)
        # 私有话题
        self.pub = self.create_publisher(String,"~/shi",10)

def main(args=None):
    #初始化ROS2客户端
    rclpy.init()
    #调用spin函数 并传入节点对象
    node = MyNode()
    rclpy.spin(node)
    #资源释放
    rclpy.shutdown()


if __name__ == '__main__':
    main()