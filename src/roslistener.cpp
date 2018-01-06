#include<ros_gtest/roslistener.h>

void RosListener::msgCallback(const std_msgs::String &msg){
  ROS_INFO_STREAM("I hear from talker: "<<msg.data.c_str());
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "roslistener");
  RosListener r1;
  ros::spin();
  return 0;
}
