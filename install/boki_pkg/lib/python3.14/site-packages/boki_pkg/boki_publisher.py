import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class BokiPublisher(Node):
    def __init__(self):
        super().__init__('boki_publisher')
        self.publisher_ = self.create_publisher(String,'boki_topic',10)
        time_period=0.5
        self.timer = self.create_timer(time_period,self.timer_callback)
        self.i=0
    def timer_callback(self):
        msg =String()
        msg.data='Hello boki:%d' %self.i
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s" ' %msg.data)
        self.i+=1

def main(args=None):
    rclpy.init(args=args)
    publisher = BokiPublisher()
    rclpy.spin(publisher)
    publisher.destroy_node()
    rclpy.shutdown()

if __name__== '__main__':
    main()
