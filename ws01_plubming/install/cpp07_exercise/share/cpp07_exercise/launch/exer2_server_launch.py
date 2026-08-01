from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    """生成 launch 描述"""
    
    # 创建节点 turtlesim_node
    t = Node(
        package='turtlesim',
        executable='turtlesim_node'
    )

    # 自定义服务端
    server = Node(
        package="cpp07_exercise",
        executable="exer2_action_server"
    )
    
    return LaunchDescription([
        t,
        server
    ])