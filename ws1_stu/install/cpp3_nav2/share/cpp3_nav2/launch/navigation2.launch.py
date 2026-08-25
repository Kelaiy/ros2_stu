from launch import LaunchDescription
from launch_ros.actions import Node
import os

# 封装终端指令相关类
# from launch.actions import ExecuteProcess
# from launch.substitutions import FindExecutable

# 参数声明与获取
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

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

    # 获取路径
    car_nav2_dir = get_package_share_directory('cpp3_nav2')
    nav2_bringup_dir = get_package_share_directory('nav2_bringup')
    rviz_config_dir = os.path.join(
        nav2_bringup_dir,'rviz','nav2_default_view.rviz')

    # 创建launch配置
    use_sim_time = LaunchConfiguration(
        'use_sim_time',default='true')
    map_yaml_path = LaunchConfiguration(
        'map',default=os.path.join(car_nav2_dir,'maps','room.yaml'))
    nav2_param_path = LaunchConfiguration(
        'params_file',default=os.path.join(car_nav2_dir,'config','nav2_params.yaml'))

    # 声明新的launch参数
    use_sim_time_arg = DeclareLaunchArgument('use_sim_time',default_value=use_sim_time,
        description='Use simulation (Gazebo) clock if true')
    map_yaml_path_arg = DeclareLaunchArgument('map', default_value=map_yaml_path,
        description='Full path to map file to load')
    nav2_param_path_arg = DeclareLaunchArgument('params_file', default_value=nav2_param_path,
        description='Full path to param file to load')

    # 使用新的launch 并传递参数
    nav2_bringup_launch = IncludeLaunchDescription(
        # 1.指定新launch路径
        PythonLaunchDescriptionSource(
            [nav2_bringup_dir,'/launch','/bringup_launch.py']
        ),
        # 2.传递参数给新launch文件
        launch_arguments={
            'map': map_yaml_path,          # 地图文件路径
            'use_sim_time': use_sim_time,  # 是否使用仿真时间
            'params_file': nav2_param_path # Nav2参数配置文件
        }.items()
    )

    rviz_node = Node(
        package='rviz2',                    # ROS包名
        executable='rviz2',                 # 可执行文件名
        name='rviz2',                       # 节点名称
        arguments=['-d', rviz_config_dir],  # 启动参数：指定配置文件
        parameters=[{'use_sim_time': use_sim_time}],  # 参数：使用仿真时间
        output='screen'                     # 输出到屏幕
    )
    
    
    return LaunchDescription([
        use_sim_time_arg,
        map_yaml_path_arg,
        nav2_param_path_arg,
        nav2_bringup_launch,
        rviz_node
    ])