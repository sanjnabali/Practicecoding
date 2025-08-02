#include <bits/stdc++.h>
using namespace std;

/*
🧠 Intuition
Count how many times each number appears.

If it appears exactly once, it's unique → add it to the sum.

⏱ Time & Space Complexity
Complexity	Value
Time	O(n)
Space	O(1) → because freq[101] is constant
*/
int sumOfUnique(vector<int>& nums) {
    int freq[101] = {0}; // nums[i] ranges from 1 to 100

    for (int num : nums) {
        freq[num]++;
    }

    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        if (freq[i] == 1) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    vector<int> nums = {1, 2, 3, 2};
    cout << sumOfUnique(nums) << endl; // Output: 4
    return 0;
}
