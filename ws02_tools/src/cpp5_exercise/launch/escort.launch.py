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

# 需求 乌龟护航

def generate_launch_description():
    # 抽取参数
    escort_back = DeclareLaunchArgument(name="turtle_back",default_value="turtle_back")
    escort_left = DeclareLaunchArgument(name="turtle_left",default_value="turtle_left")
    escort_right = DeclareLaunchArgument(name="turtle_right",default_value="turtle_right")
    # 创建turtlesim节点
    node = Node(
        package='turtlesim',
        executable='turtlesim_node'
    )
    spawn_node = Node(
        package="cpp5_exercise",
        executable="exer1_spawn",
        name="spawn_back",
        parameters=[{"x":2.0,"y":5.0,"turtle_name":LaunchConfiguration("turtle_back")}]
    )
    spawn_left = Node(
        package="cpp5_exercise",
        executable="exer1_spawn",
        name="spawn_left",
        parameters=[{"x":3.0,"y":9.0,"turtle_name":LaunchConfiguration("turtle_left")}]
    )
    spawn_right = Node(
        package="cpp5_exercise",
        executable="exer1_spawn",
        name="spawn_right",
        parameters=[{"x":4.0,"y":2.0,"turtle_name":LaunchConfiguration("turtle_right")}]
    )

    # 坐标变换
    turtle1_world = Node(
        package="cpp5_exercise",
        executable="exer2_tf_broadcaster",
        name="turtle1_world"
    )
    back_world = Node(
        package="cpp5_exercise",
        executable="exer2_tf_broadcaster",
        name="back_world",
        parameters=[{"turtle":LaunchConfiguration("turtle_back")}]
    )
    left_world = Node(
        package="cpp5_exercise",
        executable="exer2_tf_broadcaster",
        name="left_world",
        parameters=[{"turtle":LaunchConfiguration("turtle_left")}]
    )
    right_world = Node(
        package="cpp5_exercise",
        executable="exer2_tf_broadcaster",
        name="right_world",
        parameters=[{"turtle":LaunchConfiguration("turtle_right")}]
    )
    # 静态坐标点
    escort_goal_back = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="escort_goal_back",
        arguments=["--frame-id","turtle1","--child-frame-id","escort_goal_back","--x","-1.5"]
    )
    escort_goal_left = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="escort_goal_left",
        arguments=["--frame-id","turtle1","--child-frame-id","escort_goal_left","--y","1.5"]
    )
    escort_goal_right = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="escort_goal_right",
        arguments=["--frame-id","turtle1","--child-frame-id","escort_goal_right","--y","-1.5"]
    )
    # 监听坐标变换
    back_escort_goal_back = Node(
        package="cpp5_exercise",
        executable="exer3_tf_listener",
        name="back_escort_goal_back",
        parameters=[{"father_frame":LaunchConfiguration("turtle_back"),"child_frame":"escort_goal_back"}]
    )

    back_escort_goal_left = Node(
        package="cpp5_exercise",
        executable="exer3_tf_listener",
        name="back_escort_goal_left",
        parameters=[{"father_frame":LaunchConfiguration("turtle_left"),"child_frame":"escort_goal_left"}]
    )

    back_escort_goal_right = Node(
        package="cpp5_exercise",
        executable="exer3_tf_listener",
        name="back_escort_goal_right",
        parameters=[{"father_frame":LaunchConfiguration("turtle_right"),"child_frame":"escort_goal_right"}]
    )        

    return LaunchDescription([
        escort_back,escort_left,escort_right,
        node,
        spawn_node,spawn_left,spawn_right,
        turtle1_world,back_world,left_world,right_world,
        escort_goal_back,escort_goal_left,escort_goal_right,
        back_escort_goal_back,back_escort_goal_left,back_escort_goal_right
    ])