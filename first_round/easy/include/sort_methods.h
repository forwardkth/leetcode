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
   void quickSort(vector<int> &nums, int ptr_left, int ptr_right) 
   {
     if(ptr_left + 1 >= ptr_right) return;
     int pivot = ptr_left;
     int last = ptr_right - 1;
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
     quickSort(nums, ptr_left, pivot);
     quickSort(nums, pivot + 1, ptr_right);
   }

   void mergeSort(vector<int> &nums,
                  int ptr_left, int ptr_right, vector<int> &temp) 
   {

   }

   void insertionSort(vector<int> &nums) 
   {

   }

   void bubbleSort(vector<int> &nums)
   {

   }

   void selectionSort(vector<int> &nums)
   {

   }
};

