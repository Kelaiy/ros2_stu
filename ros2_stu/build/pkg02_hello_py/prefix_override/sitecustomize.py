import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/hzc/linux/ros2/ros2_stu/install/pkg02_hello_py'
