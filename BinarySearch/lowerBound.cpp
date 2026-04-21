/*
Given a sorted array of nums and an integer x, write a program to find the lower bound of x.



The lower bound algorithm finds the first and smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x.



If no such index is found, return the size of the array.


Example 1

Input : nums= [1,2,2,3], x = 2

Output:1

Explanation:

Index 1 is the smallest index such that arr[1] >= x.

Example 2

Input : nums= [3,5,8,15,19], x = 9

Output: 3

Explanation:

Index 3 is the smallest index such that arr[3] >= x.
*/
#include<iostream>
#include <vector>
using namespace std;
 int lowerBound(vector<int>& arr, int target) {
        int start=0;
        int end=arr.size()-1;
        int mid=0;
        int index=-1;
        if(arr[end]<target){
            return arr.size();
        }
        while(start<=end){
            mid=start+(end-start)/2;
           if(arr[mid]>=target){
                index=mid;
                end=mid-1;
            }else{
                
                start=mid+1;
            }
        }
        
            return index;
    }
int main(){

return 0;
}