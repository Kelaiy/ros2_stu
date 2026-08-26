import rclpy
from geometry_msgs.msg import PoseStamped
from nav2_simple_commander.robot_navigator import BasicNavigator,TaskResult
from rclpy.duration import Duration
"""
    单点导航
    ros2 action send_goal /navigate_to_pose nav2_msgs/action/NavigateToPose "{pose: {header: {frame_id: map}, pose: {position: {x: 2.0, y: 1.0}}}}" --feedback 
"""

def main(args=None):
    # 初始化 ROS2 客户端
    rclpy.init(args=args)
    # 节点
    nav = BasicNavigator()
    # 等待导航激活（必须先激活 AMCL，否则 /initialpose 消息会被丢弃）
    nav.waitUntilNav2Active()
    # 设置目标坐标点
    goal_pose = PoseStamped()
    goal_pose.header.frame_id = "map"
    goal_pose.header.stamp = nav.get_clock().now().to_msg()
    goal_pose.pose.position.x = 2.0
    goal_pose.pose.position.y = 1.0
    goal_pose.pose.orientation.w = 1.0
    
    # 发送目标接收反馈结果
    nav.goToPose(goal_pose)
    while not nav.isTaskComplete():
        feedback = nav.getFeedback()
        nav.get_logger().info(f'剩余距离:{feedback.distance_remaining}')
        # 超时自动取消
        if Duration.from_msg(feedback.navigation_time) > Duration(seconds=600.0):
            nav.cancelTask()
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