/*A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index.
 If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞. 
In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in O(log n) time.

 
*/

#include <bits/stdc++.h>
using namespace std;

int findpeakelement(vector<int>& nums){
    int low = 0;
    int high = nums.size()-1;

    while(low<high){
        int mid = low + (high-low)/2;

        if(nums[mid] > nums[mid+1]){ //if the mid element is greater than its next element then the peak element lies in the left array
            high = mid;
        }
        else{ //if the mid element is less than its next element then the peak element lies in the right array
            low = mid + 1;
        }
    }
    return low; //returning the index of the peak element
}

int main(){
    vector<int> nums = {1,2,1,3,5,6,4};
    cout<<findpeakelement(nums);
    return 0;
}