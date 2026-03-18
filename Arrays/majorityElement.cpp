/*
The majority element of an array is an element that appears more than n/2 times in the array. The array is guaranteed to have a majority element.


Example 1

Input: nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]

Output: 7

Explanation:

The number 7 appears 5 times in the 9 sized array

Example 2

Input: nums = [1, 1, 1, 2, 1, 2]

Output: 1

Explanation:

The number 1 appears 4 times in the 6 sized array
*/
#include<iostream>
#include <vector>
#include<unordered_map>
#include<math.h>
using namespace std;
  int majorityElement(vector<int>& nums) {
        unordered_map<int ,int>hmap;
        for(int i=0;i<nums.size();i++){
            if(hmap.find(nums[i])!=hmap.end()){
                hmap[nums[i]]++;
            }else{
                hmap[nums[i]]=1;
            }
        }
        int target=floor((nums.size())/2);
        // cout<<target<<endl;
        for(auto it=hmap.begin();it!=hmap.end();++it){
            if((it->second) > target){
                return it->first;
            }
        }
        return -1;
        
    }
int main(){
vector<int> arr={2,2,1,1,1,2,2};
cout<<majorityElement(arr);
return 0;
}