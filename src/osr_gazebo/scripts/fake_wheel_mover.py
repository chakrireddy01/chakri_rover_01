#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState

class FakeWheelMover(Node):
    def __init__(self):
        super().__init__('fake_wheel_mover')
        self.publisher_ = self.create_publisher(JointState, 'joint_states', 10)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.angle = 0.0

    def timer_callback(self):
        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = [
            'front_wheel_joint_left',
            'middle_wheel_joint_left',
            'rear_wheel_joint_left',
            'front_wheel_joint_right',
            'middle_wheel_joint_right',
            'rear_wheel_joint_right'
        ]
        msg.position = [self.angle]*6
        self.angle += 0.5
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = FakeWheelMover()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

