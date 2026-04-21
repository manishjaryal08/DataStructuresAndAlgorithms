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