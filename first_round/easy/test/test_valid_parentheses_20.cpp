#include "../include/valid_parentheses_20.h"
#include <gtest/gtest.h>

//Google Test cases
TEST(valid_parentheses_20, Basics)
{
  Solution solution;
  string s1{"()"};
  string s2{"()[]{}"};
  string s3{"(("};
  string s4{")))"};
  string s5{"["};
  string s6{"{[]}"};
  string s7{"([)]"};
  string s8{"(]"};

  EXPECT_EQ(solution.isValid(s1), true);
  EXPECT_EQ(solution.isValid(s2), true);
  EXPECT_EQ(solution.isValid(s3), false);
  EXPECT_EQ(solution.isValid(s4), false);
  EXPECT_EQ(solution.isValid(s5), false);
  EXPECT_EQ(solution.isValid(s6), true);
  EXPECT_EQ(solution.isValid(s7), false);
  EXPECT_EQ(solution.isValid(s8), false);
} 
int main(int argc, char** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}