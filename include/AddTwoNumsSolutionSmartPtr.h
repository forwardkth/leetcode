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

#ifndef INCLUDE_ADDTWONUMSSOLUTIONSMARTPTR_H_
#define INCLUDE_ADDTWONUMSSOLUTIONSMARTPTR_H_

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
//Google Test cases

TEST(AddTwoNums_sharedPtr_Test, testPos)
{
  ListNodeShared* ls1 = new ListNodeShared(2);
  ls1->next = make_shared<ListNodeShared>(4);
  ls1->next->next = make_shared<ListNodeShared>(3);

  ListNodeShared* ls2 = new ListNodeShared(5);
  ls2->next = make_shared<ListNodeShared>(6);
  ls2->next->next = make_shared<ListNodeShared>(4);

  AddTwoNumsSolution2 ats2;
  ListNodeShared* result2 = ats2.AddTwoNums(ls1, ls2);
  EXPECT_EQ(7, result2->val);
  EXPECT_EQ(0, result2->next->val);
  EXPECT_EQ(8, result2->next->next->val);
  EXPECT_NO_THROW(ats2.AddTwoNums(ls1, ls2));
}

TEST(AddTwoNums_fullySharedPtr_Test, testPos)
{
  std::shared_ptr<ListNodeShared> ls1 = make_shared<ListNodeShared>(2);
  ls1->next = make_shared<ListNodeShared>(4);
  ls1->next->next = make_shared<ListNodeShared>(3);

  std::shared_ptr<ListNodeShared> ls2 = make_shared<ListNodeShared>(5);
  ls2->next = make_shared<ListNodeShared>(6);
  ls2->next->next = make_shared<ListNodeShared>(4);

  AddTwoNumsSolution3 ats3;
  auto result3 = ats3.AddTwoNums(ls1, ls2);
  EXPECT_EQ(7, result3->val);
  EXPECT_EQ(0, result3->next->val);
  EXPECT_EQ(8, result3->next->next->val);
  EXPECT_NO_THROW(ats3.AddTwoNums(ls1, ls2));
}
#endif /* INCLUDE_ADDTWONUMSSOLUTIONSMARTPTR_H_ */
