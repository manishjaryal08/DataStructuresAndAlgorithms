/*
Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order.



The sorting must be done in-place, without making a copy of the original array.


Example 1

Input: nums = [1, 0, 2, 1, 0]

Output: [0, 0, 1, 1, 2]

Explanation:

The nums array in sorted order has 2 zeroes, 2 ones and 1 two

Example 2

Input: nums = [0, 0, 1, 1, 1]

Output: [0, 0, 1, 1, 1]

Explanation:

The nums array in sorted order has 2 zeroes, 3 ones and zero twos
*/

#include<iostream>
#include <vector>
#include "basicFunction.h"
using namespace std;
 void sortColors(vector<int>& nums) {
      int low=0;
      int mid=0;
      int high=nums.size()-1;
      
      while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            mid++;
            low++;
        }else if(nums[mid]==1){
            mid++;
        }else{
            swap(nums[high],nums[mid]);
            high--;
        }
      }
        
    }
int main(){
vector<int>arr={1,0,2,0,1,2,0,1,1,0,2};
sortColors(arr);
print(arr);
return 0;
}