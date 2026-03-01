/*
Given two sorted arrays nums1 and nums2, return an array that contains the union of these two arrays. The elements in the union must be in ascending order.



The union of two arrays is an array where all values are distinct and are present in either the first array, the second array, or both.


Example 1

Input: nums1 = [1, 2, 3, 4, 5], nums2 = [1, 2, 7]

Output: [1, 2, 3, 4, 5, 7]

Explanation:

The elements 1, 2 are common to both, 3, 4, 5 are from nums1 and 7 is from nums2

Example 2

Input: nums1 = [3, 4, 6, 7, 9, 9], nums2 = [1, 5, 7, 8, 8]

Output: [1, 3, 4, 5, 6, 7, 8, 9]

Explanation:

The element 7 is common to both, 3, 4, 6, 9 are from nums1 and 1, 5, 8 is from nums2
*/
#include<iostream>
#include <vector>
using namespace std;
// 1st method
 vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        
        int i=0;
        int j=0;
        int aSize=a.size();
        int bSize=b.size();
        vector<int>c;
        
        if(a[i]==b[j]){
            c.push_back(a[i]);
            i++;j++;
        }else if(a[i]<b[j]){
            c.push_back(a[i]);
            i++;
        }else{
            c.push_back(b[j]);
            j++;
        }
       
        
        while(i<aSize && j< bSize){
            
            if(a[i]==b[j]){
                 if(c.back()!=a[i]){
                c.push_back(a[i]);
            }    i++;j++;
            }else if(a[i]<b[j]){
                 if(c.back()!=a[i])
                c.push_back(a[i]);
                i++;
            }else{
                 if( c.back()!=b[j])
                c.push_back(b[j]);
                j++;
            }
            
        }
        
        while(i<aSize){
             if(c.back()!=a[i])
            c.push_back(a[i]);
            i++;
        }
        while(j<bSize){
             if( c.back()!=b[j])
            c.push_back(b[j]);
            j++;
        }
        return c;
        
    }



int main(){

return 0;
}