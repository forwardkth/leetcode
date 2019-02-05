/*
 * AddTwoNumsSolution.h
 *
 *  Created on: Jan 29, 2019
 *      Author: chao
 */

//Description:
//You are given two non-empty linked lists representing two non-negative integers.
//The digits are stored in reverse order and each of their nodes contain a single digit.
//Add the two numbers and return it as a linked list.
//
//You may assume the two numbers do not contain any leading zero, except the number 0 itself.
//
//Example:
//Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
//Output: 7 -> 0 -> 8
//Explanation: 342 + 465 = 807.

#ifndef INCLUDE_ADDTWONUMSSOLUTION_H_
#define INCLUDE_ADDTWONUMSSOLUTION_H_

#include <gtest/gtest.h>
#include <memory>

using namespace std;

//definition for singly-linked list.
struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int x)
      : val(x),
        next(NULL)
  {
  }
};

class AddTwoNumsSolution1
{
 public:
  ListNode* AddTwoNums(ListNode* l1, ListNode* l2)
  {
    int carry = 0;
    ListNode* presult = new ListNode(0);
    ListNode *tresult = presult;
    for (ListNode *pl1 = l1, *pl2 = l2; ((pl2 != nullptr) || (pl1 != nullptr));
        pl1 = (pl1 == nullptr ? nullptr : pl1->next), pl2 = (
            pl2 == nullptr ? nullptr : pl2->next), presult = presult->next)
    {
      int vl1 = (pl1 == nullptr ? 0 : pl1->val);
      int vl2 = (pl2 == nullptr ? 0 : pl2->val);
      int vsum = (vl1 + vl2 + carry) % 10;
      carry = (vl1 + vl2 + carry) / 10;
      presult->next = new ListNode(vsum);
    }
    if (carry > 0)
    {
      presult->next = new ListNode(carry);
    }
    ListNode *rtresult = tresult->next;
    delete tresult;
    return rtresult;
  }
};

//using the shared_ptr
void deleteNode(ListNode* lx)
{
  ListNode* node = lx;
  while(lx -> next != nullptr)
  {
    ListNode* node = lx;
    lx = lx -> next;
    delete node;
  }
  if(lx -> next == nullptr)
  {
    delete node;
  }
}

//Google Test cases
TEST(AddTwoNums_Test, testPos)
{
  ListNode* l1 = new ListNode(2);
  l1->next = new ListNode(4);
  l1->next->next = new ListNode(3);

  ListNode* l2 = new ListNode(5);
  l2->next = new ListNode(6);
  l2->next->next = new ListNode(4);

  AddTwoNumsSolution1 ats;
  ListNode* result = ats.AddTwoNums(l1, l2);
  EXPECT_EQ(7, result->val);
  EXPECT_EQ(0, result->next->val);
  EXPECT_EQ(8, result->next->next->val);
  EXPECT_NO_THROW(ats.AddTwoNums(l1, l2));
  deleteNode(l1);
  deleteNode(l2);
  deleteNode(result);
}

#endif /* INCLUDE_ADDTWONUMSSOLUTION_H_ */
