// There are n children standing in a line. Each child is assigned a rating 
// value given in the integer array ratings.

// You are giving candies to these children subjected to the following 
// requirements:

// Each child must have at least one candy.
// Children with a higher rating get more candies than their neighbors.
// Return the minimum number of candies you need to have to distribute 
// the candies to the children.

// Example 1:

// Input: ratings = [1,0,2]
// Output: 5
// Explanation: You can allocate to the first, second and third child 
// with 2, 1, 2 candies respectively.
// Example 2:

// Input: ratings = [1,2,2]
// Output: 4
// Explanation: You can allocate to the first, second and third child 
// with 1, 2, 1 candies respectively.
// The third child gets 1 candy because it satisfies the above two conditions.
 

// Constraints:

// n == ratings.length
// 1 <= n <= 2 * 10 4次方
// 0 <= ratings[i] <= 2 * 10　4次方

//greedy 贪心算法

#pragma once

#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution 
{
 public:
   int candy(vector<int>& ratings) 
   {
     auto size = ratings.size();
     if(size < 2) return size;
     vector<int> candy_nums(size, 1);
     for(size_t i = 1; i < size; ++i)
     {
       if(ratings[i] > ratings[i - 1])
       {
         candy_nums[i] = candy_nums[i - 1] + 1;
       }
     }
     for(size_t j = size - 1; j > 0; --j) //not! size can == 2
     {
       if(ratings[j - 1] > ratings[j])
       { // note this case in test case
         candy_nums[j - 1] =  max(candy_nums[j] + 1, candy_nums[j - 1]);
       }
     }
     return accumulate(candy_nums.begin(), candy_nums.end(), 0);
   }
};

