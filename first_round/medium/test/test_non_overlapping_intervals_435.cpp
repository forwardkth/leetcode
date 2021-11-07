#include "../include/non_overlapping_intervals_435.h"
#include <gtest/gtest.h>

//Google Test cases
TEST(assign_cookies_455_test, Basics)
{
  vector<int> g1{1, 2};
  vector<int> g2{2, 3};
  vector<int> g3{3, 4};
  vector<int> g4{1, 3};
  vector<vector<int>> s1{g1, g2, g3, g4};
  vector<int> g11{1, 2};
  vector<int> g12{1, 2};
  vector<int> g13{1, 2};
  vector<vector<int>> s11{g11, g12, g13};
  vector<int> g21{1, 2};
  vector<int> g22{2, 3};
  vector<vector<int>> s21{g21, g22};
  Solution st;
  EXPECT_EQ(st.eraseOverlapIntervals(s1), 1);
  EXPECT_EQ(st.eraseOverlapIntervals(s11), 2);
  EXPECT_EQ(st.eraseOverlapIntervals(s21), 0);
}

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}