// Task: Given a vector of strings, return all subsets using bitmasks.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<string>> subsets(vector<string>& nums){
    vector<vector<string>> result;
    int n = nums.size();
    // There are 2^n subsets for a set of size n
    int totalSubsets = 1 << n; // 2^n using bitwise left shift
    for(int mask = 0; mask < totalSubsets; ++mask){
        vector<string> subset;
        for(int i = 0; i < n; ++i){
            // Check if the i-th bit of mask is set
            if(mask & (1 << i)){
                subset.push_back(nums[i]); // If set, include nums[i] in the current subset
            }
        }
        result.push_back(subset); // Add the current subset to the result
    }
}