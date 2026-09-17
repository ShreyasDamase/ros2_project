import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from action_srv_pkg.action import RotateRobot


class RotateRobotClient(Node):
    def __init__(self):
        super().__init__('rotate_robot_client')
        self._action_client = ActionClient(self, RotateRobot, 'rotate_robot')

    def send_goal(self, target_angle, max_angular_speed):
        goal_msg = RotateRobot.Goal()
        goal_msg.target_angle = target_angle
        goal_msg.max_angular_speed = max_angular_speed
        self._action_client.wait_for_server()
        self.get_logger().info('Sending rotational goal')

        send_goal_future = (
            self._action_client.send_goal_async(
                goal_msg,
                feedback_callback=self.feedback_callback
            )
        )
        send_goal_future.add_done_callback(
            self.goal_response_callback
        )
    
    def goal_response_callback(self, future):
        goal_handle = future.result()

        if not goal_handle.accepted:
            self.get_logger().error('Goal rejected.')
            return

        self._get_result_future = (
            goal_handle.get_result_async()
        )

        self._get_result_future.add_done_callback(
            self.get_result_callback
        )

    def get_result_callback(self, future):
        result = future.result().result

        self.get_logger().info(
            f'Result success: {result.success}'
        )

        self.get_logger().info(
            f'Final angle: {result.final_angle: .2f}'
        )
        self.get_logger().info(
            f'Message: {result.message}'
        )
        rclpy.shutdown()

    def feedback_callback(
            self,
            feedback_msg
    ):
        feedback = feedback_msg.feedback
        self.get_logger().info(
            f'Current: {feedback.current_angle:.2f}°, '
            f'Remaining: {feedback.remaining_angle:.2f}°'
        )


def main(args=None):
    rclpy.init(args=args)
    node = RotateRobotClient()
    node.send_goal(
        target_angle=90.0,
        max_angular_speed=30.0
    )
    rclpy.spin(node)


if __name__ == '__main__':
    main()
