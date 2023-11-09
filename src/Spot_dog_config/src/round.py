#!/usr/bin/env python

import rospy
from geometry_msgs.msg import Twist

def main():
    rospy.init_node('continuous_cmd_vel_node', anonymous=True)
    cmd_vel_pub = rospy.Publisher('/cmd_vel', Twist, queue_size=10)
    
    rate = rospy.Rate(1)  # 1 Hz
    
    while not rospy.is_shutdown():
        cmd = Twist()
        cmd.linear.x = 0.5
        cmd.angular.z = 0.5
        cmd_vel_pub.publish(cmd)
        
        rate.sleep()

if __name__ == '__main__':
    try:
        main()
    except rospy.ROSInterruptException:
        pass