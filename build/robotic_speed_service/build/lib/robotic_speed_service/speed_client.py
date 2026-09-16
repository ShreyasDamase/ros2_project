from urllib import request

import rclpy
from rclpy.node import Node
from srv_pkg.srv import SetRobotSpeed

class RobotSpeedClient(Node):
    def __init__(self):
        super().__init__('robot_speed_client')
        self.client = self.create_client(SetRobotSpeed,'set_robot_speed')

    def request_speed(self,target_speed,gradual):
        while not self.client.wait_for_service(
            timeout_sec=1.0
        ):
            self.get_logger().info('Speed service not available')

        request = SetRobotSpeed.Request()

        request.target_speed =target_speed
        request.gradual = gradual

        future = self.client.call_async(request)

        rclpy.spin_until_future_complete(self,future)

        return future.result()

def main(args=None):
    rclpy.init(args=args)
    node = RobotSpeedClient()
    response = node.request_speed(target_speed=1.0, gradual= True)

    if response.success:
        node.get_logger().info(
            f'Speed applied: '
            f'{response.applied_speed: .2f}m/s'
        )

    else:
        node.get_logger().info(
            f'Speed request failed: '
            f'{response.message}'
        )

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
