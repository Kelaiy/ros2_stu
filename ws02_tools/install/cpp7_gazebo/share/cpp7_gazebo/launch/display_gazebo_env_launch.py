from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import SetEnvironmentVariable

# 封装终端指令相关类
from launch.actions import ExecuteProcess, TimerAction
# from launch.substitutions import FindExecutable

# 参数声明与获取
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

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

from launch_ros.parameter_descriptions import ParameterValue
from launch.substitutions import Command

import os
import subprocess
import tempfile

def generate_launch_description():
    """
        需求:加载urdf文件并显示在gz sim中
    """
    # 0.预处理xacro转URDF（Gazebo只认识urdf/sdf）
    xacro_path = get_package_share_directory("cpp7_gazebo") + "/urdf/xacro/car_urdf.xacro"
    urdf_content = subprocess.check_output(["xacro", xacro_path]).decode("utf-8")
    urdf_tmp = tempfile.NamedTemporaryFile(mode="w", suffix=".urdf", delete=False)
    urdf_tmp.write(urdf_content)
    urdf_tmp.close()

    # 1.启动robot_state_publisher节点 参数加载urdf文件内容
    # use_sim_time=True: 使用 Gazebo 仿真时钟，避免与 Gazebo 发的 TF 时间戳不一致
    model = DeclareLaunchArgument(name="model", default_value=xacro_path)
    p_value = ParameterValue(urdf_content, value_type=str)  # 直接用预处理好的
    rebot_state_pub = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[{"robot_description": p_value}, {"use_sim_time": True}]
    )
    # 1.1发布非固定关节状态
    joint_state_pub = Node(
        package="joint_state_publisher",
        executable="joint_state_publisher",
        parameters=[{"use_sim_time": True}]
    )
    # 2.启动rviz2节点
    rviz2 = Node(
        package='rviz2',
        executable='rviz2',
        arguments=["-d", get_package_share_directory("cpp7_gazebo") + "/rviz/urdf.rviz"],
        parameters=[{"use_sim_time": True}]
    )
    # 3.启动Gazebo加载自定义世界
    world_path = os.path.join(
        get_package_share_directory("cpp7_gazebo"),
        "worlds/box_house.world"
    )
    gazebo = ExecuteProcess(
        cmd=["gz", "sim", "-r", world_path],
        output="screen"
    )
    # 4.生成模型到Gazebo（延迟5秒等待Gazebo启动完成）
    spawn_model = TimerAction(
        period=5.0,
        actions=[
            ExecuteProcess(
                cmd=[
                    "gz", "service", "-s", "/world/default/create",
                    "--reqtype", "gz.msgs.EntityFactory",
                    "--reptype", "gz.msgs.Boolean",
                    "--timeout", "3000",
                    "--req", 'name: "my_car", sdf_filename: "' + urdf_tmp.name + '"'
                ],
                output="screen"
            )
        ]
    )

    # 5. ros_gz_bridge: 桥接 Gazebo 话题 → ROS2 话题
    # 5.1 桥接时钟（提供仿真时钟源，让 use_sim_time 节点能同步时钟）
    # 注意: Gazebo 实际发布在 /world/<world_name>/clock，需 remap 到 ROS2 标准的 /clock
    clock_bridge = Node(
        package="ros_gz_bridge",
        executable="parameter_bridge",
        arguments=["/world/default/clock@rosgraph_msgs/msg/Clock@gz.msgs.Clock"],
        remappings=[("/world/default/clock", "/clock")],
        output="screen",
    )
    # 5.2 桥接业务话题
    gz_bridge = Node(
        package="ros_gz_bridge",
        executable="parameter_bridge",
        arguments=[
            "/model/my_car/cmd_vel@geometry_msgs/msg/Twist@gz.msgs.Twist",
            "/model/my_car/odometry@nav_msgs/msg/Odometry@gz.msgs.Odometry",
            "/model/my_car/tf@tf2_msgs/msg/TFMessage@gz.msgs.Pose_V",
        ],
        remappings=[
            ("/model/my_car/cmd_vel", "/cmd_vel"),
            ("/model/my_car/odometry", "/odom"),
            ("/model/my_car/tf", "/tf"),
        ],
        output="screen",
    )

    return LaunchDescription([
        SetEnvironmentVariable('QT_ENABLE_HIGHDPI_SCALING', '0'),
        model,
        rebot_state_pub,
        joint_state_pub,
        rviz2,
        gazebo,
        spawn_model,
        clock_bridge,
        gz_bridge,
    ])