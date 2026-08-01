import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/hzc/linux/ros2/stu/ws02_tools/install/py1_launch'
