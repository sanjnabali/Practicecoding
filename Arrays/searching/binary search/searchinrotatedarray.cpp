/*There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length)
 such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
 For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.*/

#include <bits/stdc++.h>
using namespace std;


int search(vector<int>& nums, int target){
    int low = 0;
    int high = nums.size()-1;

    while(low<=high){
        int mid = low + (high-low)/2;

        if(nums[mid] == target) return mid; //if the target value is found at mid index


        //to check if left array is sorted

        if(nums[low] <= nums[mid]){
            if(target >= nums[low] && target <= nums[mid]){
                high = mid - 1; //if the target value lies in the left sorted array
            }
            else{
                low = mid+1;  //if the target value lies in the right unsorted array
            }
        }

        //to check if the righ array is sorted

        else{
            if(target >= nums[mid] && target <= nums[high]){
                low  = mid + 1; //if the target value lies in the right sorted array
            }
            else{
                high = mid - 1; //if the target value is in the left sorted array
            }
        }

       
    }
    return -1; //if the target value is not found in the array
}

int main(){
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    cout<<search(nums,target);
    return 0;
}