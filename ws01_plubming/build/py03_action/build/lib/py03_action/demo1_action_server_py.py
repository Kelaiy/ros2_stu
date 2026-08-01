"""
需求：订阅发布方发布的消息，并输出到终端
创建    
    ros2 pkg create py03_action --build-type ament_python --dependencies rclpy base_interfeces --node-name demo01_action_server_py
步骤：
1.导入模块
2.初始化 ROS2 客户端
3.定义节点类
4.调用 spin 函数
5.释放资源
"""

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.action.server import ServerGoalHandle, GoalResponse, CancelResponse
from base_interfeces.action import Progress
import time

#自定义节点类
class ProgressActionServer(Node):
    def __init__(self):
        super().__init__('progress_actionserver_node_py')
        self.get_logger().info('动作通信服务端创建! (Python)')
        # 创建动作服务对象  node,action_type,action_name,execute_callback
        self.server = ActionServer(
            self,
            Progress,
            "get_sum",
            self.execute_callback,
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback
        )
    # 目标接收回调函数处理验证是否合法
    def goal_callback(self,goal_request):
        num = goal_request.num
        if num < 0:
            self.get_logger().info('接收到非法数据')
            return GoalResponse.REJECT
        self.get_logger().info('提交的目标值合法')
        return GoalResponse.ACCEPT
    
    # 取消回调函数
    def cancel_callback(self,goal_handle):
        self.get_logger().info('接收到取消请求')
        return CancelResponse.ACCEPT

    # 持续反馈 最终响应 回调函数
    def execute_callback(self,goal_handle):
        #生成连续反馈
        num = goal_handle.request.num
        sum = 0
        for i in range(1,num+1):
            # 检查取消请求
            if goal_handle.is_cancel_requested:
                self.get_logger().info('动作被取消')
                goal_handle.canceled()
                result = Progress.Result()
                result.sum = 0
                return result
            sum += i
            feedback = Progress.Feedback()
            feedback.progress = i / num
            goal_handle.publish_feedback(feedback)
            self.get_logger().info("持续反馈:%.2f" % feedback.progress)
            time.sleep(1.0)
        #响应最终结果 
        goal_handle.succeed()
        result = Progress.Result()
        result.sum = sum
        self.get_logger().info("计算结果:%d" % result.sum)
        return result
        

def main(args=None):
    #初始化ROS2客户端
    rclpy.init()
    #调用spin函数 并传入节点对象
    node = ProgressActionServer()
    rclpy.spin(node)
    #资源释放
    rclpy.shutdown()


if __name__ == '__main__':
    main()