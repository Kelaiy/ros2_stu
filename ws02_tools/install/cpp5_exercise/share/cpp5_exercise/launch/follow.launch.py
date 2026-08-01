from launch import LaunchDescription
from launch_ros.actions import Node

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
# from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    # 设置参数
    t2 = DeclareLaunchArgument(name="t2_name",default_value="t2")

    # 1.启动 turtlesim_node
    turtle = Node(
        package="turtlesim",
        executable="turtlesim_node"
    )
    # 2.自定义节点 spawn
    spawn = Node(
        package="cpp5_exercise",
        executable="exer1_spawn",
        parameters=[{"turtle_name":LaunchConfiguration("t2_name")}]
    )
    # 3.广播俩只乌龟相对于world的坐标转换
    broadcaster1 = Node(
        package="cpp5_exercise",
        executable="exer2_tf_broadcaster",
        name="broa1"
    )
    
    broadcaster2 = Node(
        package="cpp5_exercise",
        executable="exer2_tf_broadcaster",
        name="broa2",
        parameters=[{"turtle":LaunchConfiguration("t2_name")}]
    )

    # 4创建监听节点
    listener = Node(
        package="cpp5_exercise",
        executable="exer3_tf_listener",
        parameters=[{"father_frame":LaunchConfiguration("t2_name"),"child_frame":"turtle1"}]

    )

    return LaunchDescription([
        t2,turtle,spawn,broadcaster1,broadcaster2,listener
    ])