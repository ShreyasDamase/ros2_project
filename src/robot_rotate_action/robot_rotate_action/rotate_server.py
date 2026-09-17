from time import time
from unittest import result

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from action_srv_pkg.action import RotateRobot
import time


class RotateRobotServer(Node):
    def __init__(self):
        super().__init__('rotate_robot_server')
        self._action_server = ActionServer(
            self,
            RotateRobot,
            'rotate_robot',
            self.execute_callback
        )
        self.get_logger().info('Rotate robot action server is ready.')

    def execute_callback(self, goal_handle):
        self.get_logger().info(
            'Executing rotational goal'
        )

        max_angular_speed = (
            goal_handle.request.max_angular_speed
        )

        target_angle = (
            goal_handle.request.target_angle
        )
        self.get_logger().info(
            f'Recieved rotational goal:'
            f'{target_angle:.2f} degree at'
            f'max {max_angular_speed:.2f} deg/s'

        )
        current_angle = 0.0
        time_step = 1.0
        feedback_msg = RotateRobot.Feedback()

        while current_angle < target_angle:
            if goal_handle.is_cancel_requested:
                self.get_logger().info('Rotational goal is canceled')
                goal_handle.canceled()
                result = RotateRobot.Result()
                result.success = False
                result.final_angle = current_angle
                result.message = (
                    'Rotation canceled'
                )
                return result

            current_angle += (max_angular_speed * time_step)

            if current_angle > target_angle:
                current_angle = target_angle

            feedback_msg.current_angle = current_angle
            feedback_msg.remaining_angle = (
                    target_angle - current_angle
            )
            goal_handle.publish_feedback(
                feedback_msg
            )
            time.sleep(1.0)
        goal_handle.succeed()

        result = RotateRobot.Result()
        result.success = True
        result.final_angle = current_angle
        result.message = (
            'Rotation complete'
        )
        return result


def main(args=None):
    rclpy.init(args=args)
    node = RotateRobotServer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
