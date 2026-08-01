"""
需求：客户端实现 提交俩个整数数据 并处理响应结果
创建
    ros2 pkg create py02_seriver --build-type ament-python --dependencies rclpy base_interfaces --node-name demo1_client_py
步骤：
1.导入模块
2.初始化 ROS2 客户端
3.定义节点类
4.调用 spin 函数
5.释放资源
"""

import rclpy
from rclpy.node import Node
from rclpy.logging import get_logger
import sys
from base_interfeces.srv import Addints

#自定义节点类
class AddIntsClient(Node):
    def __init__(self):
        super().__init__('addIntsclient_node_py')
        self.get_logger().info('客户端创建! (Python)')
        # 创建客户端 服务类型 话题名称
        self.client = self.create_client(Addints,"add_ints")
        # 连接服务器 超时时间
        while not self.client.wait_for_service(1.0):
            self.get_logger().info("服务连接中")

    def send_request(self):
        # 发送请求
        request = Addints.Request()
        request.num1 = int(sys.argv[1])
        request.num1 = int(sys.argv[2])
        self.future = self.client.call_async(request)

def main():
    # 校验
    if len(sys.argv) != 3:
        get_logger("rclpy").error("请提交俩个整形数据")
        return
    #初始化ROS2客户端
    rclpy.init()
    client = AddIntsClient()
    # 发送请求
    client.send_request()
    # 处理响应
    rclpy.spin_until_future_complete(client,client.future)
    try:
        response = client.future.result()
        client.get_logger().info("响应结果:sum = %d" %response.sum)
    except Exception:
        client.get_logger.error("服务响应失败")

    #资源释放
    rclpy.shutdown()


if __name__ == '__main__':
    main()