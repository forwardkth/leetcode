#include "../include/add_two_nums.h"
#include <gtest/gtest.h>

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
}