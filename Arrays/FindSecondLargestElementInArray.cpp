/*
Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.


Example 1

Input: nums = [8, 8, 7, 6, 5]

Output: 7

Explanation:


The largest value in nums is 8, the second largest is 7

Example 2

Input: nums = [10, 10, 10, 10, 10]

Output: -1

Explanation:

The only value in nums is 10, so there is no second largest value, thus -1 is returned
*/

#include<iostream>
#include <vector>
#include<limits.h>
using namespace std;
 int getSecondLargest(vector<int>arr) {
        
        int fi=INT_MIN;
        int sec=INT_MIN;
        for(int i=0;i<arr.size();i++){
            
            if(arr[i]==fi){
                fi=arr[i];
            }
            else if(arr[i]>fi){
                    
                if(fi>sec){
                    sec=fi;
                }
                
                fi=arr[i];
                    
            }else{
                
                if(arr[i]>sec){
                    sec=arr[i];
                }
                
            }
        }
         
        if(sec==INT_MIN){
            return -1;
        }else{
        return sec;
        }
       
    }
int main(){
    vector<int>nums={10,10,10,10,10,-96,10};
    cout<<getSecondLargest(nums);
return 0;
}