/*
Given an array of integers nums and an integer target, find the smallest index (0 based indexing) where the target appears in the array. If the target is not found in the array, return -1


Example 1

Input: nums = [2, 3, 4, 5, 3], target = 3

Output: 1

Explanation:

The first occurence of 3 in nums is at index 1

Example 2

Input: nums = [2, -4, 4, 0, 10], target = 6

Output: -1

Explanation:

The value 6 does not occur in the array, hence output is -1

*/
#include<iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>arr,int key){
    int size=arr.size();
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
return -1;
}

int main(){

vector<int>arr={56,89,56,2,18,-6,56,2,5,8};
cout<<linearSearch(arr,8);

return 0;
}