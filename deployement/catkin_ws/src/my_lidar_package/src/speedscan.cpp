#include <ros/ros.h>
#include <std_msgs/String.h>
#include <vesc_msgs/VescStateStamped.h>
#include <std_msgs/Float64.h>
void chatterCallback(const vesc_msgs::VescStateStamped::ConstPtr& state)
{
  float w_wheel = -(state->state.speed/(2*6.87));
  float V = (w_wheel/60) *(0.066*3.14);
  ROS_INFO("I heard: [%f]", V); // in m/s
  
}

int main(int argc, char **argv)
{
 ros::init(argc, argv, "listener");
 ros::NodeHandle n;
 ros::Subscriber sub = n.subscribe("/sensors/core", 1000, chatterCallback);
 ros::spin();
 return 0;
}
