import os
import launch
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch.actions import SetEnvironmentVariable

# 封装终端指令相关类
from launch.actions import ExecuteProcess
from launch.substitutions import FindExecutable

# 参数声明与获取
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration,Command

# 文件包含相关
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

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
    # 获取功能包路径
    urdf_packages_path = get_package_share_directory('cpp8_urdf_plus')
    default_xacro_path = os.path.join(urdf_packages_path,'urdf','fishbot/fishbot.urdf.xacro')
    default_rviz_config_path = os.path.join(urdf_packages_path,'config','robot_model.rviz')
    default_gazebo_world_path = os.path.join(urdf_packages_path,'world','warehouse_world.sdf')
    bridge_params = os.path.join(urdf_packages_path,'config','fishbot_bridge.yaml')

    # 声明urdf参数方便修改
    action_declare_arg_mode_path = DeclareLaunchArgument(
         name='model',
         default_value=str(default_xacro_path),
         description='加载模型文件路径')

    # 通过文件路径，获取内容 并转换成参数对象 以供传入 robot_state_publisher   xacro->urdf
    substitutions_command_result = Command([
        'xacro ',
        LaunchConfiguration('model')])
    robot_description_value = ParameterValue(
        substitutions_command_result,
        value_type=str
    )
    # 订阅/joint_states话题 发布/tf /tf_static   
    action_robot_state_publisher = Node(
        package= 'robot_state_publisher',
        executable= 'robot_state_publisher', 
        parameters= [{'robot_description':robot_description_value}]
    )
    # 启动gzsim 指定世界模型
    # gz_sim = ExecuteProcess(
    #     cmd= ['gz','sim',default_gazebo_world_path]
    # )
    gzsim_node  = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_directory('ros_gz_sim'),'launch',
            'gz_sim.launch.py')),
        launch_arguments=[('gz_args', default_gazebo_world_path + ' -r -v4')]
    )
    # 桥接转换所有yanl配置话题
    start_gazebo_ros_bridge_cmd = Node(
        package= 'ros_gz_bridge',
        executable= 'parameter_bridge',
        arguments=[
            '--ros-args',
            '-p',
            f'config_file:={bridge_params}',
        ],
        output='screen'
    )
    # 生成机器人模型节点 
    spawn_entity = Node(            
        package='ros_gz_sim',
        executable='create',
        arguments=[
            '-topic', 'robot_description',  # 从 /robot_description 话题读取模型
            '-name', 'fishbot',
        ],
        output='screen'
    )
    # 图像专用桥接节点
    start_gazebo_ros_image_bridge_cmd = Node(
        package='ros_gz_image',
        executable='image_bridge',
        arguments=['/camera/image_raw'],
        output='screen',
    )

    # 发布关节话题启动rviz2
    # action_joint_state_publisher = Node(
    #     package= 'joint_state_publisher',                                                                                                               
    #     executable= 'joint_state_publisher'
    # )
    action_rviz_node = Node(
        package= 'rviz2',
        executable= 'rviz2',
        arguments=['-d',default_rviz_config_path]
    )

    return launch.LaunchDescription([
        action_declare_arg_mode_path,
        action_robot_state_publisher,
        gzsim_node,
        start_gazebo_ros_bridge_cmd,
        # gz_sim,
        # action_joint_state_publisher,
        action_rviz_node,
        spawn_entity
    ])