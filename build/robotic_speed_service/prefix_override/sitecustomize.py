import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/shreyas/ros2_projects/ros2_ws/install/robotic_speed_service'
