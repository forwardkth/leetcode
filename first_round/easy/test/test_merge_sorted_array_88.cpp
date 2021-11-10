#include "../include/merge_sorted_array_88.h"
#include <gtest/gtest.h>

//Google Test cases
TEST(merge_sorted_array_Test, solution)
{
  int m1 = 3;
		int n1 = 3;
  std::vector<int> nums11{ 1, 2, 3, 0, 0, 0 };
  std::vector<int> nums21{ 2, 5, 6}; 
  std::vector<int> result1{ 1, 2, 2, 3, 5, 6};  

  int m2 = 1;
		int n2 = 0;
  std::vector<int> nums12{ 1 };
  std::vector<int> nums22; 
  std::vector<int> result2{ 1 };  

  int m3 = 0;
		int n3 = 1;
  std::vector<int> nums13{ 0 };
  std::vector<int> nums23{ 1 }; 
  std::vector<int> result3{ 1 };  

  Solution ts;
		ts.merge(nums11, m1, nums21, n1);
		ts.merge(nums12, m2, nums22, n2);
		ts.merge(nums13, m3, nums23, n3);
		
  EXPECT_EQ(nums11, result1);
  EXPECT_EQ(nums12, result2);
  EXPECT_EQ(nums13, result3);
}


int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}