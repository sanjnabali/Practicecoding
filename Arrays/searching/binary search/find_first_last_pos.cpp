#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(const vector<int>& nums, int target) {
        return {binary(nums, target, /*findFirst*/true),
                binary(nums, target, /*findFirst*/false)};
    }

private:
    static int binary(const vector<int>& nums, int target, bool findFirst) {
        int low = 0;
        int high = static_cast<int>(nums.size()) - 1;  // safe for empty

        int result = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] < target) {
                low = mid + 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                result = mid;
                if (findFirst) {
                    high = mid - 1;  // search left
                } else {
                    low  = mid + 1;  // search right
                }
            }
        }
        return result;
    }
};
int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    Solution sol;
    vector<int> result = sol.searchRange(nums, target);

    cout << "First index: " << result[0] 
         << ", Last index: " << result[1] << endl;

    return 0;
}