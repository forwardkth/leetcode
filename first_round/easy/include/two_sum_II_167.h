// 167. Two Sum II - Input Array Is Sorted

// Given a 1-indexed array of integers numbers that is already sorted 
// in non-decreasing order, find two numbers such that they add up to 
// a specific target number. Let these two numbers be numbers[index1] and 
// numbers[index2] where 1 <= index1 < index2 <= numbers.length.

// Return the indices of the two numbers, index1 and index2, 
// added by one as an integer array [index1, index2] of length 2.

// The tests are generated such that there is exactly one solution. 
// You may not use the same element twice.

// Example 1:
// Input: numbers = [2,7,11,15], target = 9
// Output: [1,2]
// Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. 
// We return [1, 2].

// Example 2:
// Input: numbers = [2,3,4], target = 6
// Output: [1,3]
// Explanation: The sum of 2 and 4 is 6. Therefore index1 = 1, index2 = 3. 
// We return [1, 3].

// Example 3:
// Input: numbers = [-1,0], target = -1
// Output: [1,2]
// Explanation: The sum of -1 and 0 is -1. Therefore index1 = 1, index2 = 2.
// We return [1, 2].
 
// Constraints:
// 2 <= numbers.length <= 3 * 10 4cifang
// -1000 <= numbers[i] <= 1000
// numbers is sorted in non-decreasing order.
// -1000 <= target <= 1000
// The tests are generated such that there is exactly one solution.

#pragma once

#include<vector>
using namespace std;

class Solution1 //time limit exceeded 
{
public:
  vector<int> twoSum(vector<int>& numbers, int target) 
  {
    vector<int> result;
    for(vector<int>::iterator iter1 = numbers.begin(); iter1 != numbers.end() - 1;
        ++iter1)
    {
      for(vector<int>::iterator iter2 = iter1 + 1; iter2 != numbers.end();
          ++iter2)
      {
        if(*iter2 == target - *iter1)
        {
          result.push_back(std::distance(numbers.begin(), iter1) + 1);
          result.push_back(std::distance(numbers.begin(), iter2) + 1);
        }
      }
    }
    return result;
  }
};

class Solution2
{
public:
  vector<int> twoSum(vector<int>& numbers, int target) 
  {
    int left = 0;
    int right = numbers.size() -1;
    int sum = 0;
    while(left < right)
    {
      sum = numbers[left] + numbers[right];
      if(sum == target)
      {
        break;
      }
      else if(sum < target)
      {
        ++left;
      }
      else if(sum > target)
      {
        --right;
      }
    }
    vector<int> result{left + 1, right + 1};
    return result;
  }
};
