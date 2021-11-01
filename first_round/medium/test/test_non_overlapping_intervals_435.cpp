#include "../include/non_overlapping_intervals_435.h"
#include <gtest/gtest.h>

//Google Test cases
TEST(assign_cookies_455_test, Basics)
{
  vector<int> g1{1, 2, 3};
  vector<int> s1{1, 1};
  vector<int> g2{1, 2};
  vector<int> s2{1, 2, 3};
  Solution st;
  EXPECT_EQ(st.findContentChildren(g1, s1), 1);
  EXPECT_EQ(st.findContentChildren(g2, s2), 2);
}

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}