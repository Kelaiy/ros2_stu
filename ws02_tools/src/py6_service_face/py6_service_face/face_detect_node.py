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
from base_interfaces.srv import FaceDetector
import face_recognition
import cv2
import os
import time
from ament_index_python.packages import get_package_share_directory #获取功能包share目录绝对地址
from cv_bridge import CvBridge

# 3. 自定义节点类
class MyNode(Node):
    def __init__(self):
        super().__init__('face_detect_node')
        self.get_logger().info('人脸服务节点已启动')
        self.service_ = self.create_service(FaceDetector,'face_detect',self.detect_face_callback)
        self.bridge = CvBridge()
        self.number_of_times_to_upsample = 1
        self.model = 'hog'
        self.default_image_path = os.path.join(get_package_share_directory('py6_service_face'),'resource/image.jpg')
        self.get_logger().info("人脸服务启动")
        
    def detect_face_callback(self,request,response):
        if request.image.data:
            cv_image = self.bridge.imgmsg_to_cv2(request.image)
        else:
            cv_image = cv2.imread(self.default_image_path)
            self.get_logger().info(f"传入图像加载为空,使用默认图像地址")
        #传换为opencv
        start_time = time.time()
        self.get_logger().info(f"加载完好图像,开始识别")
        #检查人脸
        face_locations = face_recognition.face_locations(cv_image,number_of_times_to_upsample=self.number_of_times_to_upsample,model=self.model)
        response.use_time = time.time() - start_time
        response.number = len(face_locations)
        for top,right,bottom,left in face_locations:
            response.top.append(top)
            response.right.append(right)
            response.bottom.append(bottom)
            response.left.append(left)

        return response 
            
    
def main(args=None):
    # 2. 初始化 ROS2 客户端
    rclpy.init(args=args)

    # 4. 调用 spin 函数，并传入节点对象
    node = MyNode()
    rclpy.spin(node)

    # 5. 资源释放
    rclpy.shutdown()


if __name__ == '__main__':
    main()