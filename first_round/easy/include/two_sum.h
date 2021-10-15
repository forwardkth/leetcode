/*
 * TwoSumSolution.h
 *
 *  Created on: Jan 29, 2019
 *      Author: chao
 */
//Description:
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
#pragma once

#include<vector>
#include<string>
#include<unordered_map>

class TwoSumSolution1
{
 public:
  std::vector<int> twoSum(std::vector<int>& nums, int target)
  {
    std::unordered_map<int, int> num_map;
    for (size_t i = 0; i < nums.size(); ++i)
    {
      num_map[nums[i]] = i;
    }
    std::vector<int> result;
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
    std::string s("there is no TwoSum solution!");
    throw s;
  }
};
