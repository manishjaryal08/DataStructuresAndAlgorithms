/*
Given an array nums of n integers, return true if the array nums is sorted in non-decreasing order or else false.


Example 1

Input : nums = [1, 2, 3, 4, 5]

Output : true

Explanation : For all i (1 <= i <= 4) it holds nums[i] <= nums[i+1], hence it is sorted and we return true.

Example 2

Input : nums = [1, 2, 1, 4, 5]

Output : false

Explanation : For i == 2 it does not hold nums[i] <= nums[i+1], hence it is not sorted and we return false.
*/
#include<iostream>
#include <vector>
using namespace std;
  bool isSorted(vector<int>arr) {
        // code here
       
        int i=1;
        
        while(i<arr.size()){
            if(arr[i-1]>arr[i]){
               return 0;
            }
            i++;
        }
        
        return 1;
    }
int main(){
  vector<int>arr={10,20,30,40,50};
    cout<<isSorted(arr);

return 0;
}