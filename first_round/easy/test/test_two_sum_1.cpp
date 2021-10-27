#include "../include/two_sum_1.h"
#include <gtest/gtest.h>

//Google Test cases
TEST(TwoSum_Test, testVecPos)
{
  int target = 9;
  std::vector<int> nums{ 2, 5, 7, 11 };
  std::vector<int> result{ 0, 2 };
  TwoSumSolution1 ts;
  EXPECT_EQ(ts.twoSum(nums, target), result);
  EXPECT_NO_THROW(ts.twoSum(nums, target));
}

TEST(TwoSum_Test, testVecNeg)
{
  int target = 9;
  std::vector<int> nums{ -2, 5, 7, 11 };
  std::vector<int> result{ 0, 3 };
  TwoSumSolution1 ts;
  EXPECT_EQ(ts.twoSum(nums, target), result);
  EXPECT_NO_THROW(ts.twoSum(nums, target));
}

TEST(TwoSum_Test, testVecException)
{
  int target = 9;
  std::vector<int> nums{ 2, 5, 6, 11 };
  TwoSumSolution1 ts;
  EXPECT_ANY_THROW(ts.twoSum(nums, target));
  EXPECT_THROW(ts.twoSum(nums, target), std::string);
}

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}