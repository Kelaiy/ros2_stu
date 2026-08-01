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
from base_interfeces.msg import Student

#自定义节点类
class ListenerStu(Node):
    def __init__(self):
        super().__init__('listenerstu_node_py')
        self.get_logger().info('订阅方创建! (Python)')
        # 创建订阅方
        self.subscription = self.create_subscription(Student,"chatter_stu",self.do_cb,10)
    
    def do_cb(self,stu):
        self.get_logger().info("订阅到的学生信息:name = %s,age = %d,height = %.2f" % (stu.name,stu.age,stu.height))



def main(args=None):
    #初始化ROS2客户端
    rclpy.init()
    #调用spin函数 并传入节点对象
    node = ListenerStu()
    rclpy.spin(node)
    #资源释放
    rclpy.shutdown()


if __name__ == '__main__':
    main()