// Given a string s containing just the characters '(', ')', '{', '}', 
// '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
 

// Example 1:

// Input: s = "()"
// Output: true

// Example 2:
// Input: s = "()[]{}"
// Output: true

// Example 3:
// Input: s = "(]"
// Output: false

// Example 4:
// Input: s = "([)]"
// Output: false

// Example 5:
// Input: s = "{[]}"
// Output: true
 

// Constraints:
// 1 <= s.length <= 10的四次方
// s consists of parentheses only '()[]{}'.

#pragma once

#include <string>
#include <stack>

using namespace std;
// use stack
class Solution {
public:
  bool isValid(string s) 
  {
    if(s.length() < 1 || s.length() % 2 != 0)
    {
      return false;
    }
    stack<char> stk;
    for(auto i : s)
    {
      if(i == '[' or i== '{' or i == '(')
      {
        stk.push(i);
      }
      else if(stk.empty() or (stk.top() == '[' and i != ']')
              or (stk.top() == '{' and i != '}')
              or (stk.top() == '(' and i != ')'))
      {
        return false;
      }
      else
      {
        stk.pop();
      }
    }
    return stk.empty();
  }
};

