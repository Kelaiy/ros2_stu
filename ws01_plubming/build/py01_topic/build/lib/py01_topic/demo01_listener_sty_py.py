""" 
订阅实现


"""

import rclpy
from rclpy.node import Node
from std_msgs.msg import String


# 自定义节点类
class Listener(Node):
    def __init__(self):
        super().__init__("listener_node_py")
        self.get_logger().info("订阅方创建了(Python)") 
        # 创建订阅方 参数 消息类型 话题名称 回调函数 OQS队列长度 返回值:订阅对象
        self.subscription = self.create_subscription(String,"chatter",self.do_cb,10)
        
    # 回调函数
    def do_cb(self,msg):
        # 解析并输出数据
        self.get_logger().info("订阅的数据:%s" % msg.data)


def main():
    # 初始化客户端 
    rclpy.init()
    # 调用spain函数 并传入节点对象
    rclpy.spin(Listener())
    # 资源释放
    rclpy.shutdown()

if __name__ == '__main__':
    main()