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

# 需求 启动turtlusim_node 动态设置turtlesim背景颜色
# 使用  ros2 launch cpp1_launch py4_args_launch.py backg_r:=255 backg_g:=0 backg_b:=0

def generate_launch_description():
    # 声明参数
    bg_r = DeclareLaunchArgument("backg_r",default_value="255")
    bg_g = DeclareLaunchArgument("backg_g",default_value="255")
    bg_b = DeclareLaunchArgument("backg_b",default_value="255")

    # 调用参数
    turtle1 = Node(
        package="turtlesim",
        executable="turtlesim_node",
        parameters=[{"background_r": LaunchConfiguration("backg_r"),"background_g": LaunchConfiguration("backg_g"),"background_b": LaunchConfiguration("backg_b")}]
    )

    return LaunchDescription([
        bg_r,bg_g,bg_b,
        turtle1
    ])