/* Leetcode - 852. Peak Index in a Mountain Array
You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.*/

#include<bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0, high = arr.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] < arr[mid + 1]) {
                // peak lies on the right
                low = mid + 1;
            } else {
                // peak lies on the left including mid
                high = mid;
            }
        }
        return low; // or high, both will be same
    }

int main(){
    vector<int> arr = {0,2,1,0};
    cout<<peakIndexInMountainArray(arr);
    return 0;
}