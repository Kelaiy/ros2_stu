from launch import LaunchDescription
from launch_ros.actions import Node
import os
from launch_ros.parameter_descriptions import ParameterValue

# 封装终端指令相关类
# from launch.actions import ExecuteProcess
# from launch.substitutions import FindExecutable

# 参数声明与获取
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration,Command

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
    urdf_packages_path =  get_package_share_directory('cpp1_gazebo')
    urdf_path = os.path.join(urdf_packages_path,'urdf','first_rebot.urdf')
    rviz_path = os.path.join(urdf_packages_path,'config','display_mode.rviz')

    action_declare_arg_mode_path = DeclareLaunchArgument(
        name='model',default_value=str(urdf_path),description='加载的模型文件路径'
    )

    # 文件路径获取内容转换参数值对象 传入robot_state_publisher
    # substitutions_result = Command(['cat ',LaunchConfiguration('model')])
    substitutions_result = Command(['xacro ',LaunchConfiguration('model')])
    description_value = ParameterValue(substitutions_result,value_type=str)

    action_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description':description_value}]
    )

    action_joint_state_publisher = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
    )

    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        arguments=['-d',rviz_path]
    )

    return LaunchDescription([
        action_declare_arg_mode_path,
        action_robot_state_publisher,
        action_joint_state_publisher,
        rviz_node
    ])
    