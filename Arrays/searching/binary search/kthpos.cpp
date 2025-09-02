/*
Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

Return the kth positive integer that is missing from this array.
Solution will be 
step 1 : first find which numbers are missing in that range of elements of array
step 2 : then find the number of missing elements before each element of array
step 3 : then check if the number of missing elements before the last element of array is less than k
step 4 : apply binary search to find the index of the smallest element such that the number of missing elements before that element is greater than or equal to k
if the number of missing elements before arr[mid] is less than k, then we need to search in the right half of the array
else we need to search in the left half of the array
if number is smaller the low will be mid + 1
else high will be mid or mid - 1

at the end return arr[low - 1] + k - (arr[low - 1] - low)
i.e the last element of the left half + the number of missing elements we need to find
low + k

*/
#include <bits/stdc++.h>
using namespace std;

int findkthpositive(vector<int>& arr, int k){
    int n = arr.size();
    int low = 0, high = n-1;

    while(low <= high){
        int mid = low + (high - low)/2;
        int missing = arr[mid] - (mid + 1);

        if(missing < k){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return low + k;
}

int main(){
    vector<int> arr = {2,3,4,7,11};
    int k = 2;
    cout << findkthpositive(arr, k) << endl;
    return 0;

}