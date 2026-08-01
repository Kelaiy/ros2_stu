from launch import LaunchDescription
from launch_ros.actions import Node


# 封装终端指令相关类
from launch.actions import ExecuteProcess
from launch.substitutions import FindExecutable

# 参数声明与获取
# from launch.actions import DeclareLaunchArgument
# from launch.substitutions import LaunchConfiguration

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

# 需求 启动turtlusim_node 打印位姿信息

""" 
        :param: package         执行程序功能包
        :param: executable      可执行程序
        :param: name            节点名称
        :param: namespace       命名空间
        :param: exec_name       设置程序标签

        :param: parameters      设置参数
        :param: remappings      设置话题重映射
        :param: ros_arguments   节点传送参数    
                                --ros-args xx yy zz
        :param: arguments       节点传送参数
                                xx yy zz --ros-args

"""

def generate_launch_description():

    turtle = Node(
        package="turtlesim",
        executable="turtlesim_node"
    )

    # 封装指令
    cmd = ExecuteProcess(
        # cmd=["ros2 topic echo /turtle1/pose"],
        # cmd=["ros2 topic","echo","/turtle1/pose"],
        cmd=[FindExecutable(name="ros2"),"topic","echo","/turtle1/pose"],
        output="both",
        shell=True
    )
    
    return LaunchDescription([
        turtle,
        cmd
    ])