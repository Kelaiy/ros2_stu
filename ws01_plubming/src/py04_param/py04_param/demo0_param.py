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


#自定义节点类
class MyParam(Node):
    def __init__(self):
        super().__init__('myparam_node_py')
        self.get_logger().info('参数API使用')
        # 创建参数对象
        p1 = rclpy.Parameter("car_name",value="Tiger")
        p2 = rclpy.Parameter("widht",value=1.5)
        p3 = rclpy.Parameter("wheels",value=2)

        # 解析参数
        self.get_logger().info("car_name=%s"%p1.value)
        self.get_logger().info("widht=%s"%p2.value)
        self.get_logger().info("wheels=%s"%p3.value)

        self.get_logger().info("key = %s"%p1.name)

def main(args=None):
    #初始化ROS2客户端
    rclpy.init()
    #调用spin函数 并传入节点对象
    node = MyParam()
    rclpy.spin(node)
    #资源释放
    rclpy.shutdown()


if __name__ == '__main__':
    main()