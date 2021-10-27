#include "../include/longest_common_prefix_14.h"
#include <gtest/gtest.h>

//Google Test cases
TEST(Longest_common_prefix_Test, Basics)
{
  string common_str1("flower");
  string common_str2("flow");
  string common_str3("flight");
  vector<string> strs1;
  strs1.push_back(common_str1);
  strs1.push_back(common_str2);
  strs1.push_back(common_str3);

  string uncommon_str1("dog");
  string uncommon_str2("racecar");
  string uncommon_str3("car");
  vector<string> strs2;
  strs2.push_back(uncommon_str1);
  strs2.push_back(uncommon_str2);
  strs2.push_back(uncommon_str3);

  vector<string> strs3{};

  string common_str4("flower");
  string common_str5("flow");
  string common_str6("flows");
  vector<string> strs4;
  strs4.push_back(common_str4);
  strs4.push_back(common_str5);
  strs4.push_back(common_str6);

  Solution ts;
  EXPECT_EQ(ts.longestCommonPrefix(strs1), "fl");
  EXPECT_EQ(ts.longestCommonPrefix(strs2), "");
  EXPECT_EQ(ts.longestCommonPrefix(strs3), "");
  EXPECT_EQ(ts.longestCommonPrefix(strs4), "flow");
} 
int main(int argc, char** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}