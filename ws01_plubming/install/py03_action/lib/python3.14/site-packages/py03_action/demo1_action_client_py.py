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
import sys
from rclpy.logging import get_logger
from rclpy.action import ActionClient
from base_interfeces.action import Progress

#自定义节点类
class ProgressActionClinet(Node):
    def __init__(self):
        super().__init__('progress_action_clinet_node_py')
        self.get_logger().info('动作客户端创建! (Python)')
        # node: Node,action_type: type[BaseAction],action_name: str,
        self.client = ActionClient(self,Progress,'get_sum')

    # 发送请求
    def send_goal(self,num):
        # 连接服务器
        self.client.wait_for_server()

        # 发送请求
        goal = Progress.Goal()
        goal.num = num
        self.future = self.client.send_goal_async(goal,self.fb_callback)
        self.future.add_done_callback(self.goal_reponse_callback)

    # 处理目标值的服务端响应
    def goal_reponse_callback(self,future):
        # 获取目标句柄
        goal_handle = future.result()
        self.get_logger().info(goal_handle.__str__())
        # 是否正常接收
        if not goal_handle.accepted:
            self.get_logger().error('目标被拒绝')
            return
        self.get_logger().info('目标被接收正在处理中......')

        # 处理最终响应结果
        self.result_future = goal_handle.get_result_async()
        self.result_future.add_done_callback(self.get_result_callback)
    # 处理最终响应 回调函数
    def get_result_callback(self,future):
        result = future.result().result
        self.get_logger().info("最终结果:%d"%result.sum)
    # 处理持续反馈 回调函数
    def fb_callback(self,fb_msg):
        progress = fb_msg.feedback.progress
        self.get_logger().info('连续反馈数据:%.2f' % progress)
def main():
    # 动态解析传入的参数
    if len(sys.argv) !=2:
        get_logger("rclpy").error("请提交一个整形数据")
        return
    #初始化ROS2客户端
    rclpy.init()
    #调用spin函数 并传入节点对象
    action_client = ProgressActionClinet()
    action_client.send_goal(int(sys.argv[1]))
    rclpy.spin(action_client)
    #资源释放
    rclpy.shutdown()


if __name__ == '__main__':
    main()