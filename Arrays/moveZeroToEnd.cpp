/*
Given an integer array nums, move all the 0's to the end of the array. The relative order of the other elements must remain the same.



This must be done in place, without making a copy of the array.


Example 1

Input: nums = [0, 1, 4, 0, 5, 2]

Output: [1, 4, 5, 2, 0, 0]

Explanation:

Both the zeroes are moved to the end and the order of the other elements stay the sa0me

Example 2

Input: nums = [0, 0, 0, 1, 3, -2]

Output: [1, 3, -2, 0, 0, 0]

Explanation:

All 3 zeroes are moved to the end and the order of the other elements stay the same
*/

#include<iostream>
#include <vector>
using namespace std;

// method 1 extra space used
void moveZeroes(vector<int>& nums) {
        vector<int>arr;
        int size=nums.size();
        int k=0;
        for(int i=0;i<size;i++){
            if(nums[i]!=0){
                arr.push_back(nums[i]);
                k++;
            }
        }

        while(k<size){
            arr.push_back(0);
            k++;
        }
        nums=arr;
    }

// method 2:-

void moveZeroe(vector<int>& nums) {
        int i=0;
        int k=0;
        int n=nums.size();
        while(i<n){
            if(nums[i]!=0){
                int temp=nums[k];
                nums[k]=nums[i];
                nums[i]=temp;
                k++;
            }
            i++;
        }
    }
int main(){

return 0;
}

