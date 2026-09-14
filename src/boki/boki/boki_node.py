import rclpy
from rclpy.node import Node

class boki:
    def __init__(self):
        super.__init__('boki_node')
        self.get_logger().info("Hello, boki")


def main(args=None):
    rclpy.init(args=args)
    node = boki()
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
