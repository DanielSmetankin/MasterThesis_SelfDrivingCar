#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>

void lidarCallback(const sensor_msgs::LaserScan::ConstrPtr& msg) {
}

int main(int argcm char** argv) {
    ros::init(argc, argv, "lidar_subscriber");
    ros::NodeHandle nh;
    ros::Subscriber lidar_sub = nh.subscribe("/lidar_topic", 1, lidarCallback);
    ros::spin();
    return);
}
