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
class TalkerStu(Node):
    def __init__(self):
        super().__init__('talkerstu_node_py')
        self.get_logger().info('发布方创建! (Python)')
        # 创建发布方
        self.publisher = self.create_publisher(Student,"chatter_stu",10)
        # 创建定时器
        self.timer = self.create_timer(0.5,self.on_timer)

        self.cont = 0

    def on_timer(self):
        # 组织并发布学生消息
        stu = Student()
        stu.name = "zq"
        stu.age = self.cont
        stu.height = 163.0
        self.publisher.publish(stu)

        self.cont += 1
        self.get_logger().info("学生信息:(%s,%d,%.2f)" %(stu.name,stu.age,stu.height))
        

def main(args=None):
    #初始化ROS2客户端
    rclpy.init()
    #调用spin函数 并传入节点对象
    node = TalkerStu()
    rclpy.spin(node)
    #资源释放
    rclpy.shutdown()


if __name__ == '__main__':
    main()