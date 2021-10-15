#include "../include/add_two_nums_smartptr.h"
#include <gtest/gtest.h>

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
