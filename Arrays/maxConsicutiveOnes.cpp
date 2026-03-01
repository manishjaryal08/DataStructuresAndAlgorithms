/*
Given an array of nums of n integers. Every integer in the array appears twice except one integer. Find the number that appeared once in the array.


Example 1

Input : nums = [1, 2, 2, 4, 3, 1, 4]

Output : 3

Explanation : The integer 3 has appeared only once.

Example 2

Input : nums = [5]

Output : 5

Explanation : The integer 5 has appeared only once.

*/

#include<algorithm>
#include<iostream>
#include <vector>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
        int ones=0;
        int maxOnes=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                ones++;
                maxOnes=max(ones,maxOnes);
            }else{
                ones=0;
            }
        }
        return maxOnes;
    }
int main(){

return 0;
}