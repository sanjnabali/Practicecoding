//Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

//Return any array that satisfies this condition.
/*
// We use a two-pointer approach:
// 'i' scans the array from left to right,
// 'front' keeps track of where the next even number should go.
// On finding an even number at index i, we swap it with nums[front] and move front ahead.
// This partitions the array into even (front) and odd (rest) in-place.

*/

#include<bits/stdc++.h>
using namespace std;

void paritysort(vector<int> &nums){
    int front = 0;

    for(int i = 0; i<nums.size(); i++){
        if(nums[i] % 2 == 0){
            swap(nums[i], nums[front]);
            front++;
        }
    }
    
}

int main(){
    vector<int> nums = {4, 2, 1, 3, 6, 5};
    paritysort(nums);
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";

    }
    return 0;
}