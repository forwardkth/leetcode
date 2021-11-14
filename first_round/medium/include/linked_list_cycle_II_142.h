// Given the head of a linked list, return the node where the cycle begins. 
// If there is no cycle, return null.
// There is a cycle in a linked list if there is some node in the list 
// that can be reached again by continuously following the next pointer. 
// Internally, pos is used to denote the index of the node that tail's 
// next pointer is connected to (0-indexed). It is -1 if there is no cycle.
//  Note that pos is not passed as a parameter.

// Do not modify the linked list.
// Example 1:
// Input: head = [3,2,0,-4], pos = 1
// Output: tail connects to node index 1
// Explanation: There is a cycle in the linked list,
// where tail connects to the second node.

// Example 2:
// Input: head = [1,2], pos = 0
// Output: tail connects to node index 0
// Explanation: There is a cycle in the linked list, 
// where tail connects to the first node.

// Example 3:
// Input: head = [1], pos = -1
// Output: no cycle
// Explanation: There is no cycle in the linked list.

// Constraints:

// The number of the nodes in the list is in the range [0, 10 4cifang].
// -105 <= Node.val <= 10 5 cifang
// pos is -1 or a valid index in the linked-list.
 

// Follow up: Can you solve it using O(1) (i.e. constant) memory?
// 对于链表找环路的问题，有一个通用的解法——快慢指针（Floyd 判圈法）。

#pragma once

#include <vector>
#include <algorithm>
using namespace std;


 // Definition for singly-linked list.
 struct ListNode
 {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
 };

class Solution 
{
 public:
   ListNode *detectCycle(ListNode *head) 
   {
     ListNode* fast_ptr = head;
     ListNode* slow_ptr = head;
     do
     {
       if(fast_ptr == nullptr || fast_ptr -> next == nullptr) 
       {
         return nullptr;
       }
       fast_ptr = fast_ptr -> next -> next;
       slow_ptr = slow_ptr -> next;
     } while(fast_ptr != slow_ptr);
     fast_ptr = head;
     while(fast_ptr != slow_ptr)
     {
       fast_ptr = fast_ptr -> next;
       slow_ptr = slow_ptr -> next;
     }
     return fast_ptr;
   }
};

