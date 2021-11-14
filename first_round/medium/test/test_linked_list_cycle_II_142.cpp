#include "../include/linked_list_cycle_II_142.h"
#include <gtest/gtest.h>

//Google Test cases
TEST(linked_list_cycle_II_142_test, Basics)
{
  ListNode* head = new ListNode(3);
  head->next = new ListNode(2);
  head->next->next = new ListNode(0);
  head->next->next->next = new ListNode(-4);
  head->next->next->next->next = head->next;

  ListNode* head1 = new ListNode(3);
  head1->next = new ListNode(2);
  head1->next->next = nullptr;

  Solution st;
  EXPECT_EQ(st.detectCycle(head), head->next);
  EXPECT_EQ(st.detectCycle(head1), nullptr);
}

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}