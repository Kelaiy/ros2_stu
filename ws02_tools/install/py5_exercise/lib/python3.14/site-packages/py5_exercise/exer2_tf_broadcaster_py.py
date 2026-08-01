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
from tf2_ros import TransformBroadcaster
from turtlesim_msgs.msg import Pose
from geometry_msgs.msg import TransformStamped
import tf_transformations

# 3. 自定义节点类
class TFDynamic(Node):
    def __init__(self):
        super().__init__('tf_dynamic_node_py')
        # 创建一个动态广播器
        self.broadcaster = TransformBroadcaster(self)
        self.declare_parameter("turtle","turtle1")
        self.turtle = self.get_parameter("turtle").get_parameter_value().string_value
        # 乌龟位姿订阅方
        self.sub = self.create_subscription(Pose,"/"+ self.turtle +"/pose",
                                            self.do_pose,10)
    def do_pose(self,pose):
        # 组织transfrom
        ts = TransformStamped()
        ts.header.stamp = self.get_clock().now().to_msg()
        ts.header.frame_id = "world"

        ts.child_frame_id = self.turtle
        # 偏移量
        ts.transform.translation.x = pose.x    
        ts.transform.translation.y = pose.y    
        ts.transform.translation.z = 0.0    
        # 四元素
        qtn = tf_transformations.quaternion_from_euler(0.0,0.0,pose.theta)
        ts.transform.rotation.x = qtn[0]
        ts.transform.rotation.y = qtn[1]
        ts.transform.rotation.z = qtn[2]
        ts.transform.rotation.w = qtn[3]
        # 发布transfrom
        self.broadcaster.sendTransform(ts)

        
def main(args=None):
    # 2. 初始化 ROS2 客户端
    rclpy.init(args=args)

    # 4. 调用 spin 函数，并传入节点对象
    node = TFDynamic()
    rclpy.spin(node)

    # 5. 资源释放
    rclpy.shutdown()


if __name__ == '__main__':
    main()