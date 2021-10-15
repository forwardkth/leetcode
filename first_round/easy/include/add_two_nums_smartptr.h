/*
 * AddTwoNumsSolutionSmartPtr.h
 *
 *  Created on: Feb 4, 2019
 *      Author: Chao Li
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

#pragma once

#include <gtest/gtest.h>
#include <memory>

using namespace std;
//definition for singly-linked list.
//shared_ptr version
struct ListNodeShared
{
  int val;
  std::shared_ptr<ListNodeShared> next;
  ListNodeShared(int x)
      : val(x),
        next(nullptr)
  {
  }
};

// "next" pointer uses the smart_ptr
class AddTwoNumsSolution2
{
 public:
  ListNodeShared* AddTwoNums(ListNodeShared* l1, ListNodeShared* l2)
  {
    int carry = 0;
    std::shared_ptr<ListNodeShared> presult = make_shared<ListNodeShared>(0);
    std::shared_ptr<ListNodeShared> tresult(presult);
    for (ListNodeShared *pl1 = l1, *pl2 = l2;
        ((pl2 != nullptr) || (pl1 != nullptr));
        pl1 = (pl1 == nullptr ? nullptr : pl1->next.get()), pl2 = (
            pl2 == nullptr ? nullptr : pl2->next.get()), presult = presult.get()
            ->next)
    {
      int vl1 = (pl1 == nullptr ? 0 : pl1->val);
      int vl2 = (pl2 == nullptr ? 0 : pl2->val);
      int vsum = (vl1 + vl2 + carry) % 10;
      carry = (vl1 + vl2 + carry) / 10;
      presult->next = make_shared<ListNodeShared>(vsum);
    }
    if (carry > 0)
    {
      presult->next = make_shared<ListNodeShared>(carry);
    }
    ListNodeShared *rtresult = tresult->next.get();
    return rtresult;
  }
};

// fully uses the smart_ptr
class AddTwoNumsSolution3
{
 public:
  shared_ptr<ListNodeShared> AddTwoNums(shared_ptr<ListNodeShared> l1,
                                        shared_ptr<ListNodeShared> l2)
  {
    int carry = 0;
    std::shared_ptr<ListNodeShared> presult = make_shared<ListNodeShared>(0);
    std::shared_ptr<ListNodeShared> tresult(presult);
    for (shared_ptr<ListNodeShared> pl1 = l1, pl2 = l2;
        ((pl2 != nullptr) || (pl1 != nullptr));
        pl1 = (pl1 == nullptr ? nullptr : pl1->next), pl2 = (
            pl2 == nullptr ? nullptr : pl2->next), presult = presult->next)
    {
      int vl1 = (pl1 == nullptr ? 0 : pl1->val);
      int vl2 = (pl2 == nullptr ? 0 : pl2->val);
      int vsum = (vl1 + vl2 + carry) % 10;
      carry = (vl1 + vl2 + carry) / 10;
      presult->next = make_shared<ListNodeShared>(vsum);
    }
    if (carry > 0)
    {
      presult->next = make_shared<ListNodeShared>(carry);
    }
    return tresult->next;
  }
};
