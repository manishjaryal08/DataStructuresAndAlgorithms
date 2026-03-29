/*
A permutation of an array of integers is an arrangement of its members into a sequence or linear order.



For example, for arr = [1,2,3], the following are all the permutations of arr:

[1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], [3,2,1].



The next permutation of an array of integers is the next lexicographically greater permutation of its integers.

More formally, if all the permutations of the array are sorted in lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted order.



If such arrangement is not possible (i.e., the array is the last permutation), then rearrange it to the lowest possible order (i.e., sorted in ascending order).



You must rearrange the numbers in-place and use only constant extra memory.


Example 1

Input: nums = [1,2,3]

Output: [1,3,2]

Explanation:

The next permutation of [1,2,3] is [1,3,2].

Example 2

Input: nums = [3,2,1]

Output: [1,2,3]

Explanation:

[3,2,1] is the last permutation. So we return the first: [1,2,3].
*/
#include<iostream>
#include <vector>
#include<algorithm>
#include "basicFunction.h"
using namespace std;
int findMax(vector<int>&arr,int i,int j){
   int max=i;
    int max2=i+1;
    for(int k=i+1;k<=j;k++){
        if(arr[k]>arr[max]&&arr[k]<arr[max2]){
            max2=k;
        }
    }
    return max2;
}
void  nxtpermuation(vector<int>&arr){
    int index=0;
    int count=0;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]<arr[i+1]){
            index=i;
            count++;
        }
    }
    if(count==0){
        sort(arr.begin(),arr.end());
        return;
    }

    int max=findMax(arr,index,arr.size()-1);
    swap(arr[index],arr[max]);
    sort(arr.begin()+index+1,arr.end());


}
int main(){
    vector<int>arr={2,1,5,4,3,0,0};
    nxtpermuation(arr);
    print(arr);


return 0;
}