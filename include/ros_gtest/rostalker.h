#ifndef ROSTALKER_H
#define ROSTALKER_H
#include<ros/ros.h>
#include<std_msgs/String.h>

class RosTalker{
public:
  RosTalker(){
    msg_pub = nh.advertise<std_msgs::String>("talker_msg",1000);
  }
  ros::NodeHandle nh;
  ros::Publisher msg_pub;
  void talk();
  int add(int , int);
};
#endif // ROSTALKER_H
