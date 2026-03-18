/*
Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.


Example 1

Input: nums = [10, 5, 2, 7, 1, 9],  k=15

Output: 4

Explanation:

The longest sub-array with a sum equal to 15 is [5, 2, 7, 1], which has a length of 4. This sub-array starts at index 1 and ends at index 4, and the sum of its elements (5 + 2 + 7 + 1) equals 15. Therefore, the length of this sub-array is 4.

Example 2

Input: nums = [-3, 2, 1], k=6

Output: 0

Explanation:

There is no sub-array in the array that sums to 6. Therefore, the output is 0.
*/

#include<iostream>
#include <vector>
#include<map>
using namespace std;
int longestSum(vector<int>arr,int k){
map <long long ,int>preSumMap;
long long sum=0;
int maxlen=0;
for(int i=0;i<arr.size();i++){
    sum=sum+arr[i];
    if(sum==k){
        maxlen=max(maxlen,i+1);
    }
    long long rem=sum-k;
  if(preSumMap.find(rem)!=preSumMap.end()){
    int len=i-preSumMap[rem];
    maxlen=max(len,maxlen);

  }
  preSumMap[sum]=i;

}
return maxlen;
}
int main(){
vector<int>arr={1,2,3,1,1,1,1,4,2,3};
cout<<longestSum(arr,3);
return 0;
}