/*You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). 
This array represents a permutation of the integers from 1 to n with one element missing. 
Your task is to identify and return the missing element.
Constraints:
1 ≤ arr.size() ≤ 10^6
1 ≤ arr[i] ≤ arr.size() + 1  
Tags :- arrays, searching, bit-magic, dsa on geeksforgeeks
*/
//when no need of negative integers in the array
#include<bits/stdc++.h>
using namespace std;


int missing_number (vector<int>& nums) {
    int n = nums.size() + 1;
    int size = n-1;

    int sum = n*(n+1)/2;
    int sum_nums = 0;
    for (int i = 0; i < size; i++) {
        sum_nums += nums[i];
        }
        return sum - sum_nums;
}

int main(){
    vector<int> nums = {1, 2, 4, 6, 3, 7};
    cout<<missing_number(nums)<<endl;
    return 0;
}