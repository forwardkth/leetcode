#include "../include/palindrome_number_9.h"
#include <gtest/gtest.h>

//Google Test cases
TEST(Palindrome_Num_Test, Basics)
{
  int num0 = 121;
  int num1 = -121;
  int num2 = 10;
  int num3 = -101;
  int num4 = 230;
  Solution ts;
  EXPECT_EQ(ts.isPalindrome(num0), true);
  EXPECT_EQ(ts.isPalindrome(num1), false);
  EXPECT_EQ(ts.isPalindrome(num2), false);
  EXPECT_EQ(ts.isPalindrome(num3), false);
  EXPECT_EQ(ts.isPalindrome(num4), false);
}

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}