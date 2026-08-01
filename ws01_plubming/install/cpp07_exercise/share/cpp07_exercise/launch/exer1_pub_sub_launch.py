from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess,RegisterEventHandler
from launch.event_handlers import OnProcessExit

def generate_launch_description():
    # 启动俩个turtlesim_node 其中一个设置命名空间
    t1 = Node(package="turtlesim",executable="turtlesim_node")
    t2 = Node(package="turtlesim",executable="turtlesim_node",namespace="t2")

    # 控制第二个乌龟掉头
    rotate = ExecuteProcess(
        cmd=["ros2 action send_goal /t2/turtle1/rotate_absolute turtlesim_msgs/action/RotateAbsolute \"{'theta':3.14}\""],
        output="both",
        shell=True
    )

    # 调用自定义的节点 节点调用顺序要求 调头完毕执行
    exer1 =  Node(package="cpp07_exercise",executable="exer1_pub_sub");
    # 控制节点运行顺序 注册事件完成
    # 创建事件注册对象 声明针对目标节点 
    rotate_exit = RegisterEventHandler(
        # 创建一个对象
        event_handler = OnProcessExit(          # 触发的动作
            target_action=rotate,               # 目标节点
            on_exit=exer1                       # 触发执行的事件
        )
    )


    return LaunchDescription([t1,t2,rotate,rotate_exit]);
