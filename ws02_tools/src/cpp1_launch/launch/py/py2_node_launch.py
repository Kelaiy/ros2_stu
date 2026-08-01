from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

# 封装终端指令相关类
# from launch.actions import ExecuteProcess
# from launch.substitutions import FindExecutable

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

# Node使用

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
    """生成 launch 描述"""
    # turtle1 = Node(
    #     package="turtlesim",
    #     executable="turtlesim_node",
    #     exec_name="my_hzc",
    #     ros_arguments=["--remap","_ns:=t2"],             #等价 ros2 run turtlusim turtlusim_ndoe --ros-args --remap _ns:=/t2
    # );

    turtlr2 = Node(
        package="turtlesim",
        executable="turtlesim_node",
        name="hzc_node_name",
        respawn=True,       #自动重启
        # 方式1
        # parameters=[{"background_r":255,"background_g":0,"background_b":0}]
        # 方式2 读取yaml文件 通过yaml文件路径读取    
        # parameters=["/home/hzc/linux/ros2/stu/ws02_tools/src/cpp1_launch/config/hzc.yaml"]
        # 优化动态获取路径
        parameters=[os.path.join(get_package_share_directory("cpp1_launch"),"config","hzc.yaml")]   
    )


    
    return LaunchDescription([
        turtlr2
    ])