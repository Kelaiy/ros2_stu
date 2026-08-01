from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    """生成 launch 描述"""
    
    # 创建节点 turtlesim
    t = Node(
        package='turtlesim',
        executable='turtlesim_node',
    )
    param = Node(
        package='cpp07_exercise',
        executable='exer3_param',
    )
    

    return LaunchDescription([
        t,
        param
    ])