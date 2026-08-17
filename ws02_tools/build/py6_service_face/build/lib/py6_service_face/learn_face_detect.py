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
import face_recognition
import cv2
import os
from ament_index_python.packages import get_package_share_directory #获取功能包share目录绝对地址

def main(args=None):
    #获取图片真实路径
    default_image_path = os.path.join(get_package_share_directory('py6_service_face'),'resource/image.jpg')
    print(f'图片真实路径:{default_image_path}')
    #使用cv2加载图片
    image = cv2.imread(default_image_path)
    face_locations = face_recognition.face_locations(image,number_of_times_to_upsample=1,model='hog')
    #绘制人脸框
    for top,right,bootom,left in face_locations:
        cv2.rectangle(image,(left,top),(right,bootom),(255,0,0),4)
    #结果显示
    cv2.imshow("face detecte result",image)
    cv2.waitKey(0)

# 新终端执行
# pkill -9 -f py6_service_face