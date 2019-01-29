//Given an array of integers, return indices of the two numbers such that they add up to a specific target.
//
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//
//Example:
//
//Given nums = [2, 7, 11, 15], target = 9,
//
//Because nums[0] + nums[1] = 2 + 7 = 9,
//return [0, 1].
#include<vector>
#include<string>
#include<unordered_map>
#include <gtest/gtest.h>

using namespace std;

class TwoSumSolution1
{
 public:
  vector<int> twoSum(vector<int>& nums, int target)
  {
    unordered_map<int, int> num_map;
    for (size_t i = 0; i < nums.size(); ++i)
    {
      num_map[nums[i]] = i;
    }
    vector<int> result;
    for (size_t i = 0; i < nums.size(); ++i)
    {
      int gap = target - nums[i];
      if (num_map.find(gap) != num_map.end()
          && (unsigned int) num_map[gap] != i)
      {
        result.push_back(i);
        result.push_back(num_map[gap]);
        return result;
      }
    }
    string s("there is no TwoSum solution!");
    throw s;
  }
};

//Goole Test cases
TEST(TwoSum_Test, testVecPos)
{
  int target = 9;
  vector<int> nums{ 2, 5, 7, 11 };
  vector<int> result{ 0, 2 };
  TwoSumSolution1 ts;
  EXPECT_EQ(ts.twoSum(nums, target), result);
  EXPECT_NO_THROW(ts.twoSum(nums, target));
}

TEST(TwoSum_Test, testVecNeg)
{
  int target = 9;
  vector<int> nums{ -2, 5, 7, 11 };
  vector<int> result{ 0, 3 };
  TwoSumSolution1 ts;
  EXPECT_EQ(ts.twoSum(nums, target), result);
  EXPECT_NO_THROW(ts.twoSum(nums, target));
}

TEST(TwoSum_Test, testVecException)
{
  int target = 9;
  vector<int> nums{ 2, 5, 6, 11 };
  TwoSumSolution1 ts;
  EXPECT_ANY_THROW(ts.twoSum(nums, target));
  EXPECT_THROW(ts.twoSum(nums, target), string);
}
