#include "ros/ros.h"
#include "std_msgs/Float64.h"
#include <sstream>
int main(int argc, char **argv)
{
 ros::init(argc, argv, "talker");
 ros::NodeHandle n;
 ros::Publisher chatter_pub = n.advertise<std_msgs::Float64>("/commands/motor/speed", 5000);
 ros::Rate loop_rate(1);
 int count = 0;
 int counter = 1;
 int increment = 250;
 while (ros::ok())
 {
  std_msgs::Float64 msg;
  msg.data = counter;
  ROS_INFO("Publishing %f",msg.data);
  counter += increment;
  if(counter > 2000 || counter < -2000)
  {
   increment *= -1;
  }
  chatter_pub.publish(msg);
  ros::spinOnce();
  loop_rate.sleep();
  ++count;
  }
  return 0;
}
