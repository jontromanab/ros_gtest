#include<gtest/gtest.h>
#include<climits>
#include<ros_gtest/rostalker.h>

int add(int a, int b){
  return a+b;
}

TEST(NumberCmpTest, ShouldPass){
  EXPECT_EQ(3, add(1,2));
}

TEST(NumberCmpTest, ShouldFail){
  EXPECT_EQ(INT_MAX, add(INT_MAX,1));
}

TEST(RtTest, TalkerFunction){
  RosTalker rt;
  EXPECT_EQ(3, rt.add(1,2));
}

int main(int argc, char **argv){
  testing::InitGoogleTest(&argc, argv);
  ros::init(argc, argv, "talker_Test");
  return RUN_ALL_TESTS();
}
