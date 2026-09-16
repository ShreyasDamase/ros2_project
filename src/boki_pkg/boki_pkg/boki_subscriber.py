import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class BokiScriber(Node):
    def __init__(self):
        super().__init__('boki_subscriber')
        self.publishers_ = self.create_subscription(String,'boki_topic',self.listner_callback,10)
    def listner_callback(self,msg):
        self.get_logger().info('i heard: %s' %msg.data)

def main(args=None):
        rclpy.init(args=args)
        subsciber=BokiScriber()
        rclpy.spin(subsciber)

        subsciber.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
