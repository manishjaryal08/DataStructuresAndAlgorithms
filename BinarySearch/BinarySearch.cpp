#include<iostream>
#include <vector>
using namespace std;
/*
int binarySearch(vector<int>arr,int target){
    
    //non recursive progrsm
    int end=arr.size()-1;
    int start=0;
    int mid=(start+end)/2;
    while(start<=end){
        
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            end=mid-1;
        }else{
            start=mid+1;
        }
        mid=(start+end)/2;

    }
        

return -1;
    
}
*/


//recursive program
int binarySearch(vector<int>arr,int target,int start,int end){
    if(start>end){
        return -1;
    }
    int mid=(start+end)/2;
    if(arr[mid]==target){
        return mid;
    }else if(arr[mid]>target){
       return binarySearch(arr,target,start,mid-1);
    }else{
      return binarySearch(arr,target,mid+1,end);
    }

}
int main(){
vector<int>arr={5,9,11,22,35,40,45,59,67,90,110,111};
cout<<binarySearch(arr,111,0,arr.size()-1);
return 0;
}