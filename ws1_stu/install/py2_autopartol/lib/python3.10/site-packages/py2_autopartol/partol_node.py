import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped,Pose
from nav2_simple_commander.robot_navigator import BasicNavigator,TaskResult
from tf2_ros import TransformListener,Buffer
from tf_transformations import euler_from_quaternion,quaternion_from_euler
import math
from autopartol_interfaces.srv import SpeechText
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2


# 自定义节点类
class PartolNode(BasicNavigator):
    def __init__(self, node_name='partol_node'):
        super().__init__(node_name)
        # 声明参数 初始位置 目标位置
        self.declare_parameter('init_point',[0.0, 0.0, 0.0])
        self.declare_parameter('tar_points',[0.0, 0.0, 0.0, 1.0, 1.0,1.57])
        self.declare_parameter('img_save_path','')
        self.init_point_ = self.get_parameter('init_point').value
        self.tar_points_ = self.get_parameter('tar_points').value
        self.img_save_path_ = self.get_parameter('img_save_path').value
        # 缓冲区 监听器 参数 缓存 节点
        self.buffer_ = Buffer()
        self.listener_ = TransformListener(self.buffer_,self)
        # 语言客户端
        self.speech_client_ = self.create_client(SpeechText,'speech_text')
        self.cv_bridge_ = CvBridge()
        self.latest_img_ = None
        self.img_sub_ = self.create_subscription(Image,'/camera_sensor/image_raw',self.img_callback,1)

    def img_callback(self,msg):
        """
        将最新消息放到latest_image
        """
        self.latest_img_ = msg

    def record_img(self):
        """
        记录图像
        """
        if self.latest_img_ is not None:
            pose = self.get_current_pose()
            cv_image = self.cv_bridge_.imgmsg_to_cv2(self.latest_img_)
            cv2.imwrite(
                f'{self.img_save_path_}img_{pose.translation.x:3.2f}_{pose.translation.y:3.2f}.png',
                cv_image
            )

    def get_pose_by_xyyaw(self,x,y,yaw):
        """
        retutn PoseStamped对象
        """
        pose = PoseStamped()
        pose.header.frame_id = 'map'
        pose.pose.position.x = x
        pose.pose.position.y = y
        # 返回顺序 xyzw
        quat = quaternion_from_euler(0,0,yaw)
        pose.pose.orientation.x = quat[0]
        pose.pose.orientation.y = quat[1]
        pose.pose.orientation.z = quat[2]
        pose.pose.orientation.w = quat[3]
        return pose
        

    def init_robot_pose(self):
        """
        初始化机器人位姿
        """
        self.init_point_ = self.get_parameter('init_point').value
        init_pose = self.get_pose_by_xyyaw(self.init_point_[0],self.init_point_[1],self.init_point_[2])
        self.setInitialPose(init_pose)
        self.waitUntilNav2Active()

    def get_target_points(self):
        """
        参数值获取目标点集合
        """ 
        points = []
        self.tar_points_ = self.get_parameter('tar_points').value
        for index in range(int(len(self.tar_points_)/3)):
            x = self.tar_points_[index*3]
            y = self.tar_points_[index*3+1]
            yaw = self.tar_points_[index*3+2]
            points.append([x,y,yaw])
            self.get_logger().info(f"获取到目标点{index}->{x},{y},{yaw}")
        return points
    
    def nav_to_pose(self,tar_point):
        """
        导航到目标点
        """
        self.goToPose(tar_point)
        while not self.isTaskComplete():
            feedback = self.getFeedback()
            self.get_logger().info(f'剩余距离:{feedback.distance_remaining}')
        # 最终结果判断
        result = self.getResult()
        if result == TaskResult.SUCCEEDED:
            self.get_logger().info('导航结果：成功')
        elif result == TaskResult.CANCELED:
            self.get_logger().warn('导航结果：被取消')
        elif result == TaskResult.FAILED:
            self.get_logger().error('导航结果：失败')
        else:
            self.get_logger().error('导航结果：返回状态无效')

    def get_current_pose(self):
        """ 
        获取位置
        """
        while rclpy.ok():
            try:
                result = self.buffer_.lookup_transform(
                    'map',
                    'base_footprint',
                    rclpy.time.Time(seconds=0.0),
                    rclpy.time.Duration(seconds=1.0)
                )                                       
                # 提取变换元素
                transform = result.transform
                self.get_logger().info(f'平移:{transform.translation}')
                return transform
            except Exception as e:
                # 获取失败处理
                self.get_logger().warn(f'不能获取坐标变换,原因：{str(e)}')
    def speech_text(self, text):
        """
        语言合成
        """
        while not self.speech_client_.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('语言合成服务未上线,等待中...')

        request = SpeechText.Request()
        request.text = text
        future = self.speech_client_.call_async(request)
        rclpy.spin_until_future_complete(self,future)
        if future.result() is not None:
            result = future.result().result
            if result:
                self.get_logger().info(f'语音合成成功：{text}')
            else:
                self.get_logger().warn(f'语音合成失败：{text}')
        else:
            self.get_logger().warn('语音合成服务请求失败')


def main(args=None):
    rclpy.init()
    partol = PartolNode()
    partol.speech_text('正在初始化位置')
    partol.init_robot_pose()
    partol.speech_text('位置初始化完成')

    while rclpy.ok():
        points = partol.get_target_points()
        for point in points:
            x,y,yaw = point[0],point[1],point[2]
            target_pose = partol.get_pose_by_xyyaw(x,y,yaw)
            partol.speech_text(text=f'准备前往目标点{x},{y}')
            partol.nav_to_pose(target_pose)
            partol.speech_text(text=f"已到达目标点{x},{y},准备记录图像")
            partol.record_img()
            partol.speech_text(text=f"图像记录完成")
    rclpy.shutdown()


if __name__ == '__main__':
    main()