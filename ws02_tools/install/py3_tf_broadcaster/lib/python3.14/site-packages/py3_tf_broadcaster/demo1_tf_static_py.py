"""
需求 
  ros2 run 包 可执行文件 x y z roll pitch yaw frame child_frame
创建 ros2 pkg create py3_tf_broadcaster --build-type ament_python --dependencies rclpy tf_transformations tf2_ros geometry_msgs turtlesim --node-name demo1_tf_static_py
流程 
1. 导包；
2. 初始化 ROS2 客户端；
3. 自定义节点类；
4. 调用 spin 函数，并传入节点对象；
5. 资源释放。
"""

# 1. 导包
import rclpy
from rclpy.node import Node
import sys
from rclpy.logging import get_logger
from tf2_ros.static_transform_broadcaster import StaticTransformBroadcaster
from geometry_msgs.msg import TransformStamped
import tf_transformations
# 3. 自定义节点类
class TFStatic(Node):
    def __init__(self,argv):
        super().__init__('tf_static_node_py')
        # 创建广播对象
        self.broadcaster = StaticTransformBroadcaster(self)
        # 组织并发布数据
        self.pub_static_tf(argv)
    def pub_static_tf(self,argv):
        ts = TransformStamped()
        # 设置参数
        ts.header.stamp = self.get_clock().now().to_msg()   # 设置时间参数
        ts.header.frame_id = argv[7]
        ts.child_frame_id = argv[8]
        
        # 设置平移
        ts.transform.translation.x = float(argv[1])
        ts.transform.translation.y = float(argv[2])
        ts.transform.translation.z = float(argv[3])

        # 设置欧拉角 转换 四元素
        qtn = tf_transformations.quaternion_from_euler(
            float(argv[4]),
            float(argv[5]),
            float(argv[6])
        )

        ts.transform.rotation.x = qtn[0]
        ts.transform.rotation.y = qtn[1]
        ts.transform.rotation.z = qtn[2]
        ts.transform.rotation.w = qtn[3]


        self.broadcaster.sendTransform(ts)

def main(args=None):
    if len(sys.argv) !=9:
        get_logger("rclpy").error("传入参数不合法")
        return
    # 2. 初始化 ROS2 客户端
    rclpy.init(args=args)

    # 4. 调用 spin 函数，并传入节点对象
    node = TFStatic(sys.argv)
    rclpy.spin(node)

    # 5. 资源释放
    rclpy.shutdown()


if __name__ == '__main__':
    main()