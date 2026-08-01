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
from geometry_msgs.msg import PointStamped

# 3. 自定义节点类
class PointTF(Node):
    def __init__(self):
        super().__init__('point_tf_node_py')
        # 创建发布方
        self.point_pub = self.create_publisher(PointStamped,"point",10)
        # 创建定时器
        self.x = 0.2
        self.timer = self.create_timer(1.0,self.on_timer)
    # 回调函数组织发布消息
    def on_timer(self):
        # 组织数据
        ps = PointStamped()
        ps.header.stamp = self.get_clock().now().to_msg()
        ps.header.frame_id = "laser"
        self.x += 0.05
        ps.point.x = self.x
        ps.point.y = 0.0
        ps.point.z = 0.3
        # 发布数据
        self.point_pub.publish(ps)
        

def main(args=None):
    # 2. 初始化 ROS2 客户端
    rclpy.init(args=args)

    # 4. 调用 spin 函数，并传入节点对象
    node = PointTF()
    rclpy.spin(node)

    # 5. 资源释放
    rclpy.shutdown()


if __name__ == '__main__':
    main()