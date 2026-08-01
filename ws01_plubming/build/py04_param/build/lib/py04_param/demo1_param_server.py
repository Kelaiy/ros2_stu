"""
需求：订阅发布方发布的消息，并输出到终端
步骤：
1.导入模块
2.初始化 ROS2 客户端
3.定义节点类
4.调用 spin 函数
5.释放资源
"""

import rclpy
from rclpy.node import Node


#自定义节点类
class ParamServer(Node):
    def __init__(self):
        super().__init__('paramserver_node_py',allow_undeclared_parameters=True)
        self.get_logger().info('订阅方创建! (Python)')

    # 增
    def declare_param(self):
        self.get_logger().info("--------------------增--------------------")
        self.declare_parameter("car_name","tiger")
        self.declare_parameter("width",1.55)
        self.declare_parameter("wheels",5)

        self.set_parameters([rclpy.Parameter("haha",value="xixi")])
    # 删
    def del_param(self):
        self.get_logger().info("--------------------删--------------------")
        self.get_logger().info("删除前包含car_name %d" % self.has_parameter("car_name"))
        self.undeclare_parameter("car_name")
        self.get_logger().info("删除后包含car_name %d" % self.has_parameter("car_name"))

    # 改
    def update_param(self):
        self.get_logger().info("--------------------改--------------------")
        self.set_parameters([rclpy.Parameter("car_name",value="Mouse")])
        car_name = self.get_parameter("car_name")
        self.get_logger().info("修改后: %s = %s" % (car_name.name,car_name.value))
    # 查
    def get_param(self):
        self.get_logger().info("--------------------查--------------------")
        # 查询单个参数
        car_name = self.get_parameter("car_naem")
        self.get_logger().info("%s = %s" % (car_name.name,car_name.value))
        # 查询多个参数
        params = self.get_parameters(["car_name","width","wheels"])
        for param in params:
            self.get_logger().info("%s -------------------- %s"% (param.name,param.value))

        # 是否存在
        self.get_logger().info("包car_name?%d" % self.has_parameter("car_name"))
        self.get_logger().info("包hzc%d" % self.has_parameter("hzc"))
def main(args=None):
    #初始化ROS2客户端
    rclpy.init()
    #调用spin函数 并传入节点对象
    node = ParamServer()
    node.declare_param()
    node.get_param()
    node.update_param()
    node.del_param()
    rclpy.spin(node)
    #资源释放
    rclpy.shutdown()


if __name__ == '__main__':
    main()