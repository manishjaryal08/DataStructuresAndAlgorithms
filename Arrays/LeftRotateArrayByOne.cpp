/*
Given an integer array nums, rotate the array to the left by one.



Note: There is no need to return anything, just modify the given array.


Example 1

Input: nums = [1, 2, 3, 4, 5]

Output: [2, 3, 4, 5, 1]

Explanation:

Initially, nums = [1, 2, 3, 4, 5]

Rotating once to left -> nums = [2, 3, 4, 5, 1]

Example 2

Input: nums = [-1, 0, 3, 6]

Output: [0, 3, 6, -1]

Explanation:

Initially, nums = [-1, 0, 3, 6]

Rotating once to left -> nums = [0, 3, 6, -1]
*/

#include<iostream>
#include <vector>
#include "basicFunction.h"
using namespace std;
void rotate(vector<int> &arr) {
        // code here
        int n=arr.size();
        int temp=arr[n-1];
        for(int i=n-1;i>0;i--){
            arr[i]=arr[i-1];
            
        }
        arr[0]=temp;
    }
int main(){

vector<int>arr={1, 0, 3, 6};
print(arr);
rotate(arr);
print(arr);



return 0;
}