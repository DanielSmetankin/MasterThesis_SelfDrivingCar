#include <ros/ros.h>
#include <std_msgs/String.h>
#include <sensor_msgs/LaserScan.h>
void chatterCallback(const sensor_msgs::LaserScan::ConstPtr& scan_msg)
{
  ROS_INFO("I heard: [%f]", scan_msg->ranges[0]);
}

int main(int argc, char **argv)
{
 ros::init(argc, argv, "listener");
 ros::NodeHandle n;
 ros::Subscriber sub = n.subscribe("/scan", 1000, chatterCallback);
 ros::spin();
 return 0;
}
