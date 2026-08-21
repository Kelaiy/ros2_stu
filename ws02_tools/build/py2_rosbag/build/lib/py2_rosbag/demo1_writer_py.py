"""
需求：
创建    ros2 pkg create py2_rosbag --build-type ament_python --dependencies rclpy rosbag2_py geometry_msgs --node-name demo1_writer_py
录制    ros2 bag record -o bdg_cmd --topics /turtle1/cmd_vel
回放    ros2 bag play bdg_cm
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


# 3. 自定义节点类
class MyNode(Node):
    def __init__(self):
        super().__init__('mynode_node_py')
        self.get_logger().info('节点已启动')


def main(args=None):
    # 2. 初始化 ROS2 客户端
    rclpy.init(args=args)

    # 4. 调用 spin 函数，并传入节点对象
    node = MyNode()
    rclpy.spin(node)

    # 5. 资源释放
    rclpy.shutdown()


if __name__ == '__main__':
    main()