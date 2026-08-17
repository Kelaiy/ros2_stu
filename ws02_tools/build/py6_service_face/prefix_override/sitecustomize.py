import sys
if sys.prefix == '/home/hzc/linux/ros2/stu/ws02_tools/src/face':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/hzc/linux/ros2/stu/ws02_tools/install/py6_service_face'
