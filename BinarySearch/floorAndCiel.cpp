    /*
    Given a sorted array nums and an integer x. Find the floor and ceil of x in nums. The floor of x is the largest element in the array which is smaller than or equal to x. The ceiling of x is the smallest element in the array greater than or equal to x. If no floor or ceil exists, output -1.


    Example 1

    Input : nums =[3, 4, 4, 7, 8, 10], x= 5

    Output: 4 7

    Explanation: The floor of 5 in the array is 4, and the ceiling of 5 in the array is 7.

    Example 2

    Input : nums =[3, 4, 4, 7, 8, 10], x= 8

    Output: 8 8

    Explanation: The floor of 8 in the array is 8, and the ceiling of 8 in the array is also 8.
    */
#include<iostream>
#include <vector>
using namespace std;
// Function to find the floor of x
    int findFloor(int arr[], int n, int x) {
        int low = 0, high = n - 1;
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] <= x) {
                ans = arr[mid];     // Potential floor
                low = mid + 1;      // Search right side
            } else {
                high = mid - 1;     // Search left side
            }
        }
        return ans;
    }

    // Function to find the ceiling of x
    int findCeil(int arr[], int n, int x) {
        int low = 0, high = n - 1;
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] >= x) {
                ans = arr[mid];     // Potential ceil
                high = mid - 1;     // Search left side
            } else {
                low = mid + 1;      // Search right side
            }
        }
        return ans;
    }

    // Function to return both floor and ceil
    pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
        int f = findFloor(arr, n, x);
        int c = findCeil(arr, n, x);
        return make_pair(f, c);
    }
int main(){

return 0;
}