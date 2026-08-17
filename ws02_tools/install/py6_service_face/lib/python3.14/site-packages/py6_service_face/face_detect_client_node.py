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
class FaceDetectClientNode(Node):
    def __init__(self):
        super().__init__('face_detect_client_node')
        self.get_logger().info('人脸客户端节点已启动')
        self.bridge = CvBridge()    
        self.default_image_path = os.path.join(get_package_share_directory('py6_service_face'),'resource/image1.jpg')
        self.client = self.create_client(FaceDetector,'face_detect')
        self.image = cv2.imread(self.default_image_path)

    def send_request(self):
        # 判断服务是否在线
        while self.client.wait_for_service(timeout_sec=1.0) is False:
            self.get_logger().info('等待服务端上线')
        # 构造Request
        request = FaceDetector.Request()
        request.image = self.bridge.cv2_to_imgmsg(self.image)
        # 发送请求并等待处理完成
        future = self.client.call_async(request)
        #future并没有包含响应结果 需要等待服务端处理完成才会把处理好的结果放到furure里面
        # while not future.done():
        #     time.sleep(1.0) #休眠当前线程 等待服务处理完成 会造成当前服务端返回无法接收
        rclpy.spin_until_future_complete(self,future) #等待服务端响应
        response = future.result() #获取响应
        self.get_logger().info(f'接受到响应,共检测到{response.number}张人脸,耗时{response.use_time}s')
        self.show_response(response)

    def show_response(self,response):
        for i in range(response.number):
            top = response.top[i]
            right = response.right[i]
            bottom = response.bottom[i]
            left = response.left[i] 
            cv2.rectangle(self.image,(left,top),(right,bottom),(255,0,0),4)
        cv2.imshow('face detecte result',self.image)
        cv2.waitKey(0)  #阻塞 
            

def main(args=None):
    # 2. 初始化 ROS2 客户端
    rclpy.init(args=args)

    # 4. 调用 spin 函数，并传入节点对象
    node = FaceDetectClientNode()
    node.send_request() 
    rclpy.spin(node)
    # 5. 资源释放
    rclpy.shutdown()


if __name__ == '__main__':
    main()