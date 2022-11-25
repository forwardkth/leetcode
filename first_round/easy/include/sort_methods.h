#pragma once

#include <vector>

using namespace std;

class Solution
{
 public:
 // Best time complexity O(nlogn)
 // average time complexity O(nlogn)
 // worse time complexity O(n^2)

 // space complexity O(n)
 // move the elements that bigger than the pivot value to the right side
 // and move the elements that smaller than the pivot value to the left side
   void quickSort(vector<int> &nums, int left, int right)
   {
     if(left + 1 >= right) return;
     int pivot = left;
     int last = right - 1;
     int pivot_value = nums[pivot];
     while(pivot < last) 
     {
       while(pivot < last && nums[last] >= pivot_value) 
       {
         -- last;
       }
       nums[pivot] = nums[last]; // move to the left side of the pivot
       while(pivot < last && nums[pivot] <= pivot_value)
       {
         ++pivot;
       } 
       nums[last] = nums[pivot]; // move to the right side of the pivot
     }
     nums[pivot] = pivot_value; // set the current pivot
     quickSort(nums, left, pivot);
     quickSort(nums, pivot + 1, right);
   }

// 每次合并操作的平均时间复杂度为O(n)，而完全二叉树的深度为|log2n|。
// 总的平均时间复杂度为O(nlogn)。而且，归并排序的最好，最坏，平均时间复杂度均为O(nlogn)
// https://www.cnblogs.com/chengxiao/p/6194356.html
// https://www.runoob.com/w3cnote/merge-sort.html
// https://zhuanlan.zhihu.com/p/124356219
   void mergeSort(vector<int> &nums,
                  int left, int right, vector<int> &temp) 
   {
      if(left + 1 >= right) return;
      int mid = left + (right - left) / 2;
      mergeSort(nums, left, mid, temp);
      mergeSort(nums, mid, right, temp);
      int p = left; 
      int q = mid; 
      int i = left;
      while(p < mid || q < right)
      {
         if(q >= right || (p < mid) && nums[p] <= nums[q])
         {
           temp[i++] =  nums[p++];
         }
         else 
         {
           temp[i++] = nums[q++];
         }
      }
      for(int j = left; j < right; ++j)
      {
         nums[j] = temp[j];
      }
   }

    // 时间复杂度O(n^2)
    // 空间复杂度O(1)
   void insertionSort(vector<int> &nums) 
   {
      size_t size = nums.size();
      for(int i = 0; i < size; ++i)
      {
        for(int j = i; j > 0 && nums[j] < nums[j-1]; --j)
        {
           swap(nums[j], nums[j-1]);
        }
      }
   }

   // 时间复杂度O(n^2)
   // 空间复杂度O(1)
   // 类似selection sort，每次跟相邻的元素进行比较，然后直接交换,直到最大的换到队尾。
   // 然后重复。
   void bubbleSort(vector<int> &nums)
   {
     size_t size = nums.size();
     for(int i = 0; i < size - 1; ++i)
     {
         for(int j = 0; j < size - i - 1; ++j)
         {
             if(nums[j] > nums[j + 1])
             {
                 swap(nums[j], nums[j+1]);
             }
         }
     }
   }

// 时间复杂度O(n^2)
// 空间复杂度O(1)
// 每次遍历找到最大值或者最小值放在对首，然后在重复遍历剩下的直到遍历结束
   void selectionSort(vector<int> &nums)
   {
     size_t size = nums.size();
     for(int i = 0; i < size - 1; ++i)
     {
         int temp = i;
         for(int j = i + 1; j < size; ++j)
         {
             if(nums[j] < nums[temp])
             {
                 temp = j;
             }
         }
         swap(nums[temp], nums[i]);
     }
   }
};

