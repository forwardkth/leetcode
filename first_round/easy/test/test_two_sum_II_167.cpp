#include "../include/two_sum_II_167.h"
#include <gtest/gtest.h>

//Google Test cases
TEST(TwoSum_II_Test, solution1)
{
  int target1 = 9;
  std::vector<int> nums1{ 2, 7, 11, 15 };
  std::vector<int> result1{ 1, 2 }; 
  int target2 = 6; 
  std::vector<int> nums2{ 2, 3, 4};
  std::vector<int> result2{ 1, 3 }; 
  int target3 = -1;  
  std::vector<int> nums3{ -1, 0};
  std::vector<int> result3{ 1, 2 };  
  Solution1 ts;
  EXPECT_EQ(ts.twoSum(nums1, target1), result1);
  EXPECT_EQ(ts.twoSum(nums2, target2), result2);
  EXPECT_EQ(ts.twoSum(nums3, target3), result3);
}

TEST(TwoSum_II_Test, solution2)
{
  int target1 = 9;
  std::vector<int> nums1{ 2, 7, 11, 15 };
  std::vector<int> result1{ 1, 2 }; 
  int target2 = 6; 
  std::vector<int> nums2{ 2, 3, 4};
  std::vector<int> result2{ 1, 3 }; 
  int target3 = -1;  
  std::vector<int> nums3{ -1, 0};
  std::vector<int> result3{ 1, 2 };  
  Solution2 ts;
  EXPECT_EQ(ts.twoSum(nums1, target1), result1);
  EXPECT_EQ(ts.twoSum(nums2, target2), result2);
  EXPECT_EQ(ts.twoSum(nums3, target3), result3);
}

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}