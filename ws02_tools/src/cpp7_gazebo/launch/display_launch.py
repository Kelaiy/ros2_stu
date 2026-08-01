from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import SetEnvironmentVariable

# 封装终端指令相关类
# from launch.actions import ExecuteProcess
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

def generate_launch_description():
    """
        需求:加载urdf文件
        运行带参 
        ros2 launch cpp7_gazebo display_launch.py model:="$(ros2 pkg prefix --share cpp7_gazebo)/urdf/xacro/car_urdf.xacro"
    """
    # 1.启动robot_state_publisher节点 参数加载urdf文件内容
    model = DeclareLaunchArgument(name="model",default_value=get_package_share_directory("cpp7_gazebo") + "/urdf/xacro/car_urdf.xacro")
    p_value = ParameterValue(Command(["xacro ",LaunchConfiguration("model")]))
    # p_value = ParameterValue(Command(["xacro ",get_package_share_directory("cpp7_gazebo") + "/urdf/xacro/car_urdf.xacro"]))
    rebot_state_pub = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[{"robot_description":p_value}]
    )
    # 1.1发布非固定关节状态
    joint_state_pub = Node(
        package="joint_state_publisher",
        executable="joint_state_publisher"
    )
    # 2.启动rviz2节点
    rviz2 = Node(
        package='rviz2',
        executable='rviz2',
        arguments=[{"-d",get_package_share_directory("cpp7_gazebo") + "/rviz/urdf.rviz"}]
    )
    
    return LaunchDescription([
        SetEnvironmentVariable('QT_ENABLE_HIGHDPI_SCALING', '0'),
        model,
        rebot_state_pub,joint_state_pub,
        rviz2
    ])