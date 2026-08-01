"""
需求：订阅发布方发布的消息，并输出到终端
步骤：
1.导入模块
2.初始化 ROS2 服务端
3.定义节点类

5.释放资源
"""

import rclpy
from rclpy.node import Node
from base_interfeces.srv import Addints

#自定义节点类
class AddIntsServer(Node):
    def __init__(self):
        super().__init__('addIntsserver_node_py')
        self.get_logger().info('服务端创建! (Python)')
        # 创建服务端
        self.server = self.create_service(Addints,"add_ints",self.add)
    def add(self,request,response):
        response.sum = request.num1 + request.num2
        self.get_logger().info("%d + %d = %d" %(request.num1,request.num2,response.sum))
        return response

def main(args=None):
    #初始化ROS2客户端
    rclpy.init()
    #调用spin函数 并传入节点对象
    node = AddIntsServer()
    rclpy.spin(node)
    #资源释放
    rclpy.shutdown()


if __name__ == '__main__':
    main()