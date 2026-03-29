/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0. You must do it in place.


Example 1

Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]

Output: [[1,0,1],[0,0,0],[1,0,1]]

Explanation:

Element at position (1,1) is 0, so set entire row 1 and column 1 to 0.

Example 2

Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]

Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

Explanation:

There are two zeroes: (0,0) and (0,3).

Row 0 → all elements become 0
Column 0 and column 3 → all elements become 0
*/
#include<iostream>
#include <vector>
using namespace std;
/*
//brute force solution
void makeRowZero(vector<vector<int>>&arr,int i){
    for(int j=0;j<arr[0].size();j++){
        if(arr[i][j]!=0){
            arr[i][j]=-1;
        }
    }

}
void makeColZero(vector<vector<int>>&arr,int j){
for(int i=0;i<arr.size();i++){
    if(arr[i][j]!=0){
            arr[i][j]=-1;
        }
}
}
void setMatrixZero(vector<vector<int>>&arr){

for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[0].size();j++){
        if(arr[i][j]==0){
            makeRowZero(arr,i);
            makeColZero(arr,j);
        }
    }
}
for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[0].size();j++){
        if(arr[i][j]==-1){
           arr[i][j]=0;
        }
    }
}

}
*/
/*
//Better approch


void setMatrixZero(vector<vector<int>>&arr){
    int row[arr[0].size()]={0};
    int col[arr.size()]={0};
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            if(arr[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
         for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){

            if (row[i]==1||col[j]==1)
            {
                arr[i][j]=0;
            }
            
        }
    }
}
    */

    /*
    //best approach --c constant space

    */
   void setMatrixZero(vector<vector<int>>&matrix){
     int m = matrix.size();
        int n = matrix[0].size();

        // Flag to track if first row should be zeroed
        bool firstRowZero = false;
        // Flag to track if first column should be zeroed
        bool firstColZero = false;

        // Check if first row has any zero
        for (int j = 0; j < n; j++) {
            if (matrix[0][j] == 0) {
                firstRowZero = true;
                break;
            }
        }

        // Check if first column has any zero
        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0) {
                firstColZero = true;
                break;
            }
        }

        // Mark rows and columns in first row/column
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Set matrix cells to zero based on markers
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Handle first row
        if (firstRowZero) {
            for (int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }

        // Handle first column
        if (firstColZero) {
            for (int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
   }

int main(){
vector<vector<int>>arr={{1,1,1,1},
                        {1,0,1,1},
                        {1,1,1,0},
                        {1,1,1,1}};

                        setMatrixZero(arr);
for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[0].size();j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}