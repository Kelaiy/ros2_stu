import rclpy
from rclpy.node import Node
from tf2_ros import TransformListener,Buffer
from tf_transformations import euler_from_quaternion


# 自定义节点类
class TFListener(Node):
    """
        TF 监听器节点
        功能：监听并打印机器人在地图坐标系中的位置和姿态
    """
    def __init__(self):
        super().__init__('tflistener')
        self.get_logger().info('TF监听节点已启动')
        # 缓冲区
        self.buffer = Buffer()
        # 监听器 参数 缓存 节点
        self.listener = TransformListener(self.buffer,self)
        # 定时器
        self.timer = self.create_timer(1,self.get_transfrom)
    def get_transfrom(self):
        # 查询 map -> base_footprint 变换
        try:
            tf = self.buffer.lookup_transform(
                'map',
                'base_footprint',
                rclpy.time.Time(seconds=0),
                rclpy.time.Duration(seconds=1)
            )

            # 提取变换元素
            transform = tf.transform
            # 欧拉角->四元素
            rotation_euler = euler_from_quaternion([
                transform.rotation.x,
                transform.rotation.y,
                transform.rotation.z,
                transform.rotation.w
            ])
            self.get_logger().info(
                f'平移:{transform.translation},'      # 位置 (x, y, z)
                f'旋转四元数:{transform.rotation}:'   # 四元数 (x, y, z, w)
                f'旋转欧拉角:{rotation_euler}'        # 欧拉角 (roll, pitch, yaw)
            )
        except Exception as e:
            # 获取失败处理
            self.get_logger().warn(f'不能获取坐标变换,原因：{str(e)}')

def main(args=None):
    # 初始化 ROS2 客户端
    rclpy.init(args=args)

    node = TFListener()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('用户中断，正在退出...')
    finally:
        node.destroy_node()
        rclpy.shutdown()
        print('节点已正常退出')


if __name__ == '__main__':
    main()