#include "../include/longest_common_prefix_14.h"
#include <gtest/gtest.h>

//Google Test cases
TEST(TwoSum_Test, Basics)
{
  string roman1("III");
  string roman2("IV");
  string roman3("IX");
  string roman4("LVIII");
  string roman5("MCMXCIV");

  Solution ts;
  EXPECT_EQ(ts.romanToInt(roman1), 3);
  EXPECT_EQ(ts.romanToInt(roman2), 4);
  EXPECT_EQ(ts.romanToInt(roman3), 9);
  EXPECT_EQ(ts.romanToInt(roman4), 58);
  EXPECT_EQ(ts.romanToInt(roman5), 1994);
}

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}