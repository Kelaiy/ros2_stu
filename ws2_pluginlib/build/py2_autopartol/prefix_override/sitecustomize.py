import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/shared/ws2_pluginlib/install/py2_autopartol'
