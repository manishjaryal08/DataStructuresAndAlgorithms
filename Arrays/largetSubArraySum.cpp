/*
Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.



A subarray is a contiguous non-empty sequence of elements within an array.


Example 1

Input: nums = [2, 3, 5, -2, 7, -4]

Output: 15

Explanation:

The subarray from index 0 to index 4 has the largest sum = 15

Example 2

Input: nums = [-2, -3, -7, -2, -10, -4]

Output: -2

Explanation:

The element on index 0 or index 3 make up the largest sum when taken as a subarray
*/

#include<iostream>
#include <vector>
#include<climits>
using namespace std;
int maxSubArray(vector<int>& nums) {
     int sum=0;
     int max=INT_MIN;
     for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];
      
        if(sum>max){
            max=sum;
        }
          if(sum<0){
            sum=0;
        }
        
     }
return max;
    }
    vector<int> printSubArray(vector<int>nums){
        int sum=0;
        int start=-1;
        int end=-1;
     int max=INT_MIN;
     for(int i=0;i<nums.size();i++){
       if(sum==0){
        start=i;
       }
        sum=sum+nums[i];
      
        if(sum>max){
            max=sum;
            end=i;
        }
          if(sum<0){
            sum=0;
        }
        
     }
     vector<int>result;
     result.push_back(start);
     result.push_back(end);
     return result;

    } 
int main(){

vector<int> arr={-2,-3,4,-1,-2,1,5,-3};
vector<int>ans=printSubArray(arr);
for(int i=ans[0];i<=ans[1];i++){
    cout<<arr[i]<<" ";
}
return 0;
}