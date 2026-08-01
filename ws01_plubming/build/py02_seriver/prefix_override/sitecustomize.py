import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/hzc/linux/ros2/stu/ws01_plubming/install/py02_seriver'
