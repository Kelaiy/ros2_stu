import os
import launch
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch.actions import SetEnvironmentVariable

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
    """
        需求: 需求: 启动 robot_state_publisher，加载 URDF 模型
    """
    # 获取默认urdf路径
    urdf_packages_path = get_package_share_directory('cpp8_urdf_plus')
    default_urdf_path = os.path.join(urdf_packages_path,'urdf','first_rebot.urdf')
    default_rviz_config_path = os.path.join(urdf_packages_path,'config','robot_model.rviz')
    

    # 声明urdf参数方便修改
    action_declare_arg_mode_path = DeclareLaunchArgument(
         name='model',
         default_value=str(default_urdf_path),
         description='加载模型文件路径')

    # 通过文件路径，获取内容 并转换成参数对象 以供传入 robot_state_publisher
    substitutions_command_result = Command([
        'xacro ',
        LaunchConfiguration('model')])
    robot_description_value = ParameterValue(
        substitutions_command_result,
        value_type=str)

    action_robot_state_publisher = Node(
        package = 'robot_state_publisher',
        executable= 'robot_state_publisher', 
        parameters= [{'robot_description':robot_description_value}]
    )

    action_joint_state_publisher = Node(
        package= 'joint_state_publisher',                                                                                                               
        executable= 'joint_state_publisher'
    )

    action_rviz_node = Node(
        package= 'rviz2',
        executable= 'rviz2',
        arguments=['-d',default_rviz_config_path]
    )

    return launch.LaunchDescription([
        action_declare_arg_mode_path,
        action_robot_state_publisher,
        action_joint_state_publisher,
        action_rviz_node
    ])