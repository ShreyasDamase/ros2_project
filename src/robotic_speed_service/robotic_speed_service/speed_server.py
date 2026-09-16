from srv_pkg.srv import SetRobotSpeed

import rclpy
from rclpy.node import Node

class RobotSpeedServer(Node):

    def __init__(self):
        super().__init__('robot_speed_server')

        self.current_speed = 0.0

        self.max_speed= 2.0

        self.service_ = self.create_service(
            SetRobotSpeed,
            'set_robot_speed',
            self.set_robot_speed_callback
        )
        self.get_logger().info('Robot speed service ready')
    def set_robot_speed_callback(self,request,response):
        self.get_logger().info(f'Received request: ' 
                               f'target_speed={request.target_speed:.2f} m/s'
                               f'gradual={request.gradual}')

        if request.target_speed<0.0:

            response.success = False
            response.applied_speed= self.current_speed
            response.message= (
                'Target speed can not be negative'
            )
        if request.target_speed > 2.0:
            response.success = False
            response.applied_speed= self.current_speed
            response.message= (
            f'Target speed exceed maximum'
            f'of {self.max_speed:.2f} m/s'
            )
            return response

        if request.gradual:

            self.get_logger().info('Gradual speed transition requested.')
        else:
            self.get_logger().info('Immediate speed change requested')

        self.current_speed = request.target_speed
        response.success = True
        response.applied_speed= self.current_speed
        response.message= 'Speed update successfully'

        return response

def main(args=None):
    rclpy.init(args=args)
    node= RobotSpeedServer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__== '__main__':
    main()
