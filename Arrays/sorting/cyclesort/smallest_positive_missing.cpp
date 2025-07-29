//You are given an integer array arr[]. Your task is to find the smallest positive number missing from the array.

//Note: Positive number starts from 1. The array can have negative integers too.


#include<bits/stdc++.h>
using namespace std;


int missing_number(vector<int> &nums, int n){
    int n = nums.size(); // input has n-1 elements, numbers are 1 to n

        // Cyclic sort logic
        int i = 0;
        while (i < n) {
            int correct = nums[i] - 1;
            if (nums[i] > 0 && nums[i] <= n && nums[i] != nums[correct]) {
                swap(nums[i], nums[correct]);
            } else {
                i++;
            }
        }

        // Find the missing number
        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }

        return n + 1;


}
int main(){
    vector<int> nums = {3,1,-1,4,0};
    int n = nums.size()-1;
    cout<<missing_number(nums, n)<<endl;
    return 0;
    

}