
// Given an integer x, return true if x is palindrome integer.

// An integer is a palindrome when it reads the same backward as forward. 
//For example, 121 is palindrome while 123 is not.

// Example 1:

// Input: x = 121
// Output: true
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, 
// it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
// Example 4:

// Input: x = -101
// Output: false
 

// Constraints:

// -231 <= x <= 231 - 1
#pragma once

class Solution
{
 public:
  bool isPalindrome(int x)
  {
    if(x < 0)
    {
      return false;
    }
    int origin_num = x;
    long int result_num = 0;
    while(x - (x % 10) != 0)
    {
      result_num *= 10;
      result_num += (x % 10); 
      x = (x - (x % 10)) / 10;
    }
    result_num = result_num * 10 + x;
    if(origin_num == result_num)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};
