from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

def generate_launch_description():
    """生成 launch 描述"""
    x = 6
    y = 9
    theta = 0.0
    name = "t2"
    # 在目标点生成一直新乌龟
    # ros2 service call /spawn turtlesim_msgs/srv/Spawn "{x: 6.0, y: 9.0, theta: 0.0, name: 't2'}"
    spawn = ExecuteProcess(
        cmd=["ros2 service call /spawn turtlesim_msgs/srv/Spawn \"{'x':"
             + str(x) +",'y':"+ str(y)
             + ",'theta':"+ str(theta) 
             + ",'name':'"+ name +"'}\""],
        output="both",
        shell=True
    )

    # 调用客户端发送目标点新坐标
    # ros2 run cpp07_exercise exer1_client 7 9 0.0 -ros-args
    client = Node(package="cpp07_exercise",
                  executable="exer2_action_client",
                  arguments=[str(x),str(y),str(theta)]);
    
    return LaunchDescription([spawn,client])
