from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    """生成 launch 描述"""
    
    # turtlesim_node
    t = Node(
        package='turtlesim',
        executable='turtlesim_node'
    )
    # 自定义服务端
    server = Node(
        package="cpp07_exercise",
        executable="exer1_server"
    )
    
    return LaunchDescription([
        t,
        server
    ])