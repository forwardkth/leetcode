// Write a function to find the longest common prefix string amongst 
// an array of strings.
// If there is no common prefix, return an empty string "".

// Example 1:
// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
 
// Constraints:
// 1 <= strs.length <= 200
// 0 <= strs[i].length <= 200
// strs[i] consists of only lower-case English letters.

#pragma once

#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

class Solution
{
 public:
   string longestCommonPrefix(vector<string>& strs)
   {
     if(0 == strs.size())
     {
       string s{};
       return s;
     }
     long unsigned int lenth_min = 200;
     string min_str{""};
     for(vector<string>::iterator iter = strs.begin();
         iter != strs.end(); ++iter)
     {
       if((*iter).length() < lenth_min)
       {
         lenth_min = (*iter).length();
         min_str = (*iter);
       }
     }
     string result{""};
     for(long unsigned int index = 0 ; index < lenth_min ; ++index)
     {
       for(vector<string>::iterator iter = strs.begin();
           iter != strs.end(); ++iter)
       {
         if(min_str[index] != (*iter)[index])
         {
           return result;
         }
       }
       result += min_str[index];
     }
     return result;
   }
};

