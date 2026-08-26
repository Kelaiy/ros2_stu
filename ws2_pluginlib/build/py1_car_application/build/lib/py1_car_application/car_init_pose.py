import rclpy
from geometry_msgs.msg import PoseStamped
from nav2_simple_commander.robot_navigator import BasicNavigator
import math
"""
    TF 初始位置发布节点
    功能：监听并打印机器人在地图坐标系中的位置和姿态
    ros2 topic pub --once /initialpose geometry_msgs/msg/PoseWithCovarianceStamped
"""

def main(args=None):
    # 初始化 ROS2 客户端
    rclpy.init(args=args)
    # 节点
    nav = BasicNavigator()
    init_pose = PoseStamped()
    init_pose.header.frame_id = "map"
    init_pose.header.stamp = nav.get_clock().now().to_msg()
    # init_pose.pose.position.x = 1.36
    # init_pose.pose.position.y = 0.93

    # 设置偏航角为 -2.66 弧度（约 -152.4°）
    # yaw = -2.66
    # init_pose.pose.orientation.z = math.sin(yaw / 2)
    # init_pose.pose.orientation.w = math.cos(yaw / 2)

    # 等待导航激活（必须先激活 AMCL，否则 /initialpose 消息会被丢弃）
    nav.waitUntilNav2Active()
    # 激活后再发布初始位置
    nav.setInitialPose(init_pose)
    # 给 AMCL 时间处理 initialpose 并完成粒子滤波重置
    import time
    time.sleep(2.0)

    # rclpy.spin(nav)
    # 资源释放
    rclpy.shutdown()


if __name__ == '__main__':
    main()