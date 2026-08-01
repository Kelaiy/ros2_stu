""" 
创建
ros2 pkg create pkg02_hello_py --build-type ament_python --dependencies rclpy --node-name hello

"""

import rclpy
from rclpy.node import Node


# 自定义类
class MyNode(Node):
    def __init__(self):
        super().__init__("hello_node_py")
        self.get_logger().info("hello world!(Python 继承方式)")
    

def main():
    #初始化
    rclpy.init()
    #创建对象
    node = MyNode()
    #....

    #资源释放
    rclpy.shutdown()

    pass
