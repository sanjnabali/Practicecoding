/*
🧠 Approach: Two Pointers

- Why? 
  The array is already sorted, so we can efficiently find a pair that sums to the target 
  using two pointers instead of nested loops or binary search.

- What?
  We place one pointer at the start (left) and one at the end (right) of the array.
  We calculate the sum of these two elements:
    - If the sum is equal to the target → we found our answer.
    - If the sum is less than the target → move left pointer right to increase the sum.
    - If the sum is greater than the target → move right pointer left to decrease the sum.

- How?
  This logic works because the array is sorted in non-decreasing order. 
  We keep moving the pointers inward until the correct pair is found.

  and we are returning return {} like this because result should be like this
  we are adding 1 because the array indexing is 0-based so to make it 1-indexed.
 ⚙️ Time Complexity: O(n)
⚙️ Space Complexity: O(1)
*/


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                return {left + 1, right + 1}; // 1-indexed
            } else if (sum < target) {
                left++; // Need larger sum
            } else {
                right--; // Need smaller sum
            }
        }

        // This will never be reached due to problem guarantee
        return {-1, -1};
    }
};

int main(){
    Solution solution;
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = solution.twoSum(numbers, target);

    cout << "Indices of the two numbers: " <<"[" <<result[0] << " " << result[1] <<"]" << endl;



return 0;

}
