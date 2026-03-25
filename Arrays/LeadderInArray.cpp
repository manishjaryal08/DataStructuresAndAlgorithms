#include<iostream>
#include <vector>
#include<algorithm>
#include "basicFunction.h"
using namespace std;
 vector<int> leaders(vector<int>& arr) {
        // code here
        int max=arr[arr.size()-1];
        vector<int>result;
        result.push_back(max);
        
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]>=max){
                max=arr[i];
                result.push_back(max);
            }
        }
         reverse(result.begin(),result.end());
         return result;
        
    }
int main(){
vector<int>arr={6, 17, 4, 3, 5, 2};
vector<int>temp=leaders(arr);
print(temp);

return 0;
}