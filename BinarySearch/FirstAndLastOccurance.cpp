
/*
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
 
*/
#include<iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int>&arr,int target){
    int end=arr.size()-1;
    int start=0;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            end=mid-1;
        }else{
            start=mid+1;
        }
        mid=(start+end)/2;

    }
return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>arr={-1,-1};
        int index=binarySearch(nums,target);
        if(index==-1){
            return arr;
        }
        int lowerIndex=index;
        int higherIndex=index;
        while(lowerIndex>0&&nums[lowerIndex-1]==target){
        lowerIndex--;
        }
        while(higherIndex<nums.size()-1&&nums[higherIndex+1]==target){
            higherIndex++;
        }
        arr[0]=lowerIndex;
        arr[1]=higherIndex;
        return arr;
    }
int main(){

return 0;
}