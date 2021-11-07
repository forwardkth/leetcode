// Given an array of intervals intervals where intervals[i] = [starti, endi], 
// return the minimum number of intervals you need to remove to make 
// the rest of 
// the intervals non-overlapping.

// Example 1:

// Input: intervals = [[1,2],[2,3],[3,4],[1,3]]
// Output: 1
// Explanation: [1,3] can be removed and the rest of the intervals are
// non-overlapping.

// Example 2:

// Input: intervals = [[1,2],[1,2],[1,2]]

// Output: 2
// Explanation: You need to remove two [1,2] to make the rest of the intervals
// non-overlapping.

// Example 3:

// Input: intervals = [[1,2],[2,3]]
// Output: 0
// Explanation: You don't need to remove any of the intervals since 
// they're already non-overlapping.
 
// Constraints:
// 1 <= intervals.length <= 10 5次方
// intervals[i].length == 2
// -5 * 10 4次方 <= starti < endi <= 5 * 10 4次方

//greedy 贪心算法

#pragma once

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
 int eraseOverlapIntervals(vector<vector<int>>& intervals) 
 {
   size_t size = intervals.size();
   if(0 == size)
   {
     return 0;
   }
   sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b)
   {
     return (a[1] < b[1]); 
   });
   int counter = 0;
   int previous_end = intervals[0][1];
   for(size_t i = 1; i < size; ++i)
   {
     if(intervals[i][0] < previous_end)
     {
       ++counter;
     }
     else
     {
       previous_end = intervals[i][1];
     }
   }
   return counter;
 }
};

