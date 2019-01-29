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
#include<unordered_map>
#include <gtest/gtest.h>

using namespace std;

class TwoSumSolution1
{
 public:
  vector<int> twoSum(vector<int>& nums, int target)
  {
    unordered_map<int, int> num_map;
    for(size_t i = 0; i < nums.size(); ++i)
    {
      num_map[nums[i]] = i;
    }
    vector<int> result;
    for(size_t i = 0; i < nums.size(); ++i)
    {
      int gap = target - nums[i];
      if(num_map.find(gap) != num_map.end() && (unsigned int)num_map[gap] != i)
      {
        result.push_back(i);
        result.push_back(num_map[gap]);
        return result;
      }
    }
    throw "there is no TwoSum solution!";
  }
};

//Run TwoSum solution
void runTwoSum()
{
  TwoSumSolution1 ts;
  int target = 9;
  vector<int> nums;
  nums.push_back(2);
  nums.push_back(5);
  nums.push_back(7);
  nums.push_back(11);
  vector<int> result;
  try
  {
    result = ts.twoSum(nums, target);
  }
  catch (string &i)
  {
    std::abort();
  }
  printf("the TwoSum solution is: [ ");
  for(size_t i = 0; i < result.size(); ++i)
  {
    printf("%d ", result[i]);
  }
  printf("]\n");
}

//Goole Test cases
TEST(TwoSum_Test, testVec)
{
  int target = 9;
  vector<int> nums {2, 5, 7, 11};
  vector<int> result {0, 2};
  TwoSumSolution1 ts;
  EXPECT_EQ(ts.twoSum(nums, target), result);
}
