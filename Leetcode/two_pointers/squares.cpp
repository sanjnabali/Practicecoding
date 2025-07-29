#include<bits/stdc++.h>
using namespace std;
/*# Intuition
Given a sorted array (which may contain negative numbers), squaring the values could disrupt the order, because negative numbers become positive. The square of a large negative number might be greater than that of a small positive number. So, simply squaring and returning won't maintain sorted order.

Instead of squaring all elements and sorting (which takes O(n log n)), we can take advantage of the input array already being sorted. We observe that the **largest square values will be at either the beginning or end** of the array due to absolute values. So we can use a two-pointer approach to build the result array from the back.

# Approach
- Use two pointers: one at the start (`left = 0`) and one at the end (`right = n - 1`) of the array.
- Initialize an empty result array of the same size, and a `position` pointer starting at the end.
- In each iteration:
  - Compare the absolute values of `nums[left]` and `nums[right]`.
  - Square the larger absolute value and place it at the current position in the result array.
  - Move the corresponding pointer (`left++` or `right--`) and decrement the position.
- This continues until `left > right`.
- This gives a sorted squared array in O(n) time.

# Complexity
- **Time complexity:**  
  $$O(n)$$  
  Each element is visited exactly once during the two-pointer scan.

- **Space complexity:**  
  $$O(n)$$  
  We use a new result array of the same size to store squared values in sorted order.

*/

vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0, right = n-1;
        int pos = n-1;
        while(left <= right){
            if(abs(nums[left]) > abs(nums[right])){
                result[pos--] = nums[left] * nums[left];
                left++;
            } else{
                result[pos--] = nums[right] * nums[right];
                right--;
            }
        }
        return result;
    }


int main(){
    vector<int> nums = {-4,-1,0,3,10};
vector<int> result = sortedSquares(nums);
for(int i = 0; i < result.size(); i++){
    cout << result[i] << " ";
    }
return 0;

}