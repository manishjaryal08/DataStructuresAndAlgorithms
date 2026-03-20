/*
Given an integer array nums of even length consisting of an equal number of positive and negative integers.Return the answer array in such a way that the given conditions are met:



Every consecutive pair of integers have opposite signs.


For all integers with the same sign, the order in which they were present in nums is preserved.


The rearranged array begins with a positive integer.

Example 1

Input : nums = [2, 4, 5, -1, -3, -4]

Output : [2, -1, 4, -3, 5, -4]

Explanation:

The positive number 2, 4, 5 maintain their relative positions and -1, -3, -4 maintain their relative positions

Example 2

Input : nums = [1, -1, -3, -4, 2, 3]

Output : [1, -1, 2, -3, 3, -4]

Explanation:

The positive number 1, 2, 3 maintain their relative positions and -1, -3, -4 maintain their relative positions
*/

#include<iostream>
#include <vector>
#include"basicFunction.h"
using namespace std;
 vector<int> rearrangeArray(vector<int>& nums) {
        int size=nums.size();
        vector<int>arr(size);
        int i=0;
        int j=1;
        for(int k=0;k<nums.size();k++){
            if(nums[k]>=0){
                arr[i]=nums[k];
                i=i+2;
            }else{
                arr[j]=nums[k];
                j=j+2;
            }
        }
        return arr;
    }
int main(){
    vector<int>arr={3,-6};
    vector<int>result=rearrangeArray(arr);

    print(result);

return 0;
}