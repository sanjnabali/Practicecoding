#include<bits/stdc++.h>
using namespace std;

 vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int idx = abs(nums[i]) - 1;
            if (nums[idx] > 0) {
                nums[idx] = -nums[idx]; // mark as visited
            }
        }

        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                result.push_back(i + 1); // not visited
            }
        }

        return result;
    }

int main() {
    vector<int> nums = {4, 0, 3, 1};
    vector<int> result = findDisappearedNumbers(nums);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
