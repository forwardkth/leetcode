#include "../include/candy_135.h"
#include <gtest/gtest.h>

//Google Test cases
TEST(assign_cookies_455_test, Basics)
{
  vector<int> g1{1, 0, 2};
  vector<int> g2{1, 4, 2, 2, 1};
  vector<int> g3{1, 3, 4, 5, 2}; //note this case
               //1  2   3  4  1
               //1  2   3  4  1
  Solution st;
  EXPECT_EQ(st.candy(g1), 5);
  EXPECT_EQ(st.candy(g2), 7);
  EXPECT_EQ(st.candy(g3), 11);
}

// int main(int argc, char **argv)
// {
//   testing::InitGoogleTest(&argc, argv);
//   return RUN_ALL_TESTS();
// }