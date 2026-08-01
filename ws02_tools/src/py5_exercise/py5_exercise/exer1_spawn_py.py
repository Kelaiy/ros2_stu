"""
需求：
创建：
流程：
1. 导包；
2. 初始化 ROS2 客户端；
3. 自定义节点类；
4. 调用 spin 函数，并传入节点对象；
5. 资源释放。
"""

# 1. 导包
import rclpy
from rclpy.node import Node
from turtlesim_msgs.srv import Spawn

# 3. 自定义节点类
class Exer1Spawn(Node):
    def __init__(self):
        super().__init__('exer1_spawn_node_py')
        # 声明获取参数
        self.x = self.declare_parameter("x",3.0)
        self.y = self.declare_parameter("y",3.0)
        self.theta = self.declare_parameter("theta",0.0)
        self.turtle_name = self.declare_parameter("turtle_name","turtle2")
        # 创建客户端
        self.client_ = self.create_client(Spawn,"/spawn")
        while not self.client_.wait_for_service(1.0):
            self.get_logger().info("等待客户端连接")
        self.req = Spawn.Request()

    def send_request(self):
        # 组织请求发送数据
        self.req.x = self.get_parameter("x").get_parameter_value().double_value
        self.req.y = self.get_parameter("y").get_parameter_value().double_value
        self.req.theta = self.get_parameter("theta").get_parameter_value().double_value
        self.req.name = self.get_parameter("turtle_name").get_parameter_value().string_value
        self.future = self.client_.call_async(self.req)
def main(args=None):
    # 2. 初始化 ROS2 客户端
    rclpy.init(args=args)

    # 4. 调用 spin 函数，并传入节点对象
    client = Exer1Spawn()
    client.send_request()
    # 处理响应
    rclpy.spin_until_future_complete(client,client.future)
    try:
        response = client.future.result()
    except Exception as e:
        client.get_logger().info("服务请求失败:%s" % e)
    else:
        if len(response.name) == 0:
            client.get_logger().info('王八重名,创建失败')
        else:
            client.get_logger().info('王八：%s被创建'% response.name)
            

    # 5. 资源释放
    rclpy.shutdown()


if __name__ == '__main__':
    main()