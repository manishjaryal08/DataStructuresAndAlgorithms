/*
Given an N * N 2D integer matrix, rotate the matrix by 90 degrees clockwise.

The rotation must be done in place, meaning the input 2D matrix must be modified directly.

Example 1:-
Input: matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
Output: matrix = [[7, 4, 1], [8, 5, 2], [9, 6, 3]]
Example 2:-
Input: matrix = [[0, 1, 1, 2], [2, 0, 3, 1], [4, 5, 0, 5], [5, 6, 7, 0]]
Output: matrix = [[5, 4, 2, 0], [6, 5, 0, 1], [7, 0, 3, 1], [0, 5, 1, 2]]
*/
#include<iostream>
#include <vector>
using namespace std;
 void rotate(vector<vector<int>>& matrix) {
       int start=0;
       int end=matrix.size()-1;
       while(start<end){
        for(int k=0;k<matrix[0].size();k++){
            swap(matrix[start][k],matrix[end][k]);
        }
    start++;
        end--;
       }
       for(int i=0;i<matrix.size();i++){
        for(int j=i+1;j<matrix[0].size();j++){
            swap(matrix[i][j],matrix[j][i]);
        }
       }
    }
int main(){
vector<vector<int>>arr={{1,2,3},{4,5,6},{7,8,9}};
rotate(arr);
for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[0].size();j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}