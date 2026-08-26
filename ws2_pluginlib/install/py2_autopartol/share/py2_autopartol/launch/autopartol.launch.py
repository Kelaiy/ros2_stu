from launch import LaunchDescription
from launch_ros.actions import Node
import os

# 封装终端指令相关类
# from launch.actions import ExecuteProcess
# from launch.substitutions import FindExecutable

# 参数声明与获取
# from launch.actions import DeclareLaunchArgument
# from launch.substitutions import LaunchConfiguration,Command

# 文件包含相关
# from launch.actions import IncludeLaunchDescription
# from launch.launch_description_sources import PythonLaunchDescriptionSource

# 分组相关
# from launch_ros.actions import PushRosNamespace
# from launch.actions import GroupAction

# 事件相关
# from launch.event_handlers import OnProcessStart, OnProcessExit
# from launch.actions import ExecuteProcess, RegisterEventHandler, LogInfo

# 获取功能包下 share 目录路径
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    py2_autopartol_path =  get_package_share_directory('py2_autopartol')
    partol_config_path = os.path.join(py2_autopartol_path,'config','partol_config.yaml')

    # 启动partol_node
    action_partol_node = Node(
        package='py2_autopartol',
        executable='partol_node',
        output='screen',
        parameters=[partol_config_path]
    )

    # 启动speaker
    action_speaker_node = Node(
        package='py2_autopartol',
        executable='speaker',
        output='screen'
    )

    return LaunchDescription([
        action_partol_node,
        action_speaker_node
    ])
    