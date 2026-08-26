import rclpy
from geometry_msgs.msg import PoseStamped
from nav2_simple_commander.robot_navigator import BasicNavigator,TaskResult
from rclpy.duration import Duration
import math

"""
    多点导航
    ros2 action send_goal /navigate_through_poses nav2_msgs/action/NavigateThroughPoses \ 
    "{poses: [{pose: {position: {x: 1.0, y: 0.0, z: 0.0}}}, \
     {pose: {position: {x: 2.0, y: 1.0, z: 0.0}}}, \
     {pose: {position: {x: 3.0, y: 2.0, z: 0.0}, \
     orientation: {z: 0.707, w: 0.707}}}]}" --feedback 
"""


def create_goal_pose(navigator, x, y, yaw=0.0, frame_id="map"):
    """
    创建导航目标点
    Args:
        navigator: BasicNavigator 实例
        x: 目标 x 坐标 (米)
        y: 目标 y 坐标 (米)
        yaw: 目标朝向 (弧度), 默认 0.0
        frame_id: 坐标系, 默认 "map"
    Returns:
        PoseStamped: 目标点消息
    """    
    goal_pose = PoseStamped()
    goal_pose.header.frame_id = frame_id
    goal_pose.header.stamp = navigator.get_clock().now().to_msg()
    goal_pose.pose.position.x = x
    goal_pose.pose.position.y = y
    goal_pose.pose.position.z = 0.0
    # 设置朝向（yaw 转四元数）
    goal_pose.pose.orientation.x = 0.0
    goal_pose.pose.orientation.y = 0.0
    goal_pose.pose.orientation.z = math.sin(yaw / 2)
    goal_pose.pose.orientation.w = math.cos(yaw / 2)
    return goal_pose

def main(args=None):
    # 初始化 ROS2 客户端
    rclpy.init(args=args)
    # 节点
    nav = BasicNavigator()
    # 等待导航激活（必须先激活 AMCL，否则 /initialpose 消息会被丢弃）
    nav.waitUntilNav2Active()
    # 设置目标坐标点
    waypoints = [(2.0, 1.0), (3.0, 8.0), (5.0, 3.0)]
    goal_poses = [create_goal_pose(nav, x, y) for x, y in waypoints]

    # 发送目标接收反馈结果
    nav.followWaypoints(goal_poses)
    while not nav.isTaskComplete():
        feedback = nav.getFeedback()
        if feedback:
                nav.get_logger().info(f'当前路店编号:{feedback.current_waypoint}')

    # 最终结果判断
    result = nav.getResult()
    if result == TaskResult.SUCCEEDED:
        nav.get_logger().info('导航结果：成功')
    elif result == TaskResult.CANCELED:
        nav.get_logger().warn('导航结果：被取消')
    elif result == TaskResult.FAILED:
        nav.get_logger().error('导航结果：失败')
    else:
        nav.get_logger().error('导航结果：返回状态无效')
    
    rclpy.shutdown()    


if __name__ == '__main__':
    main()