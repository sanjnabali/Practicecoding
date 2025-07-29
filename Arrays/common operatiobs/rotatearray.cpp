//Given an array arr, rotate the array by one position in clockwise direction.
/*
Constraints:
1<=arr.size()<=105
0<=arr[i]<=105*/
/*
/*
🔁 Problem: Rotate Array by One (Clockwise)
-------------------------------------------
- Move the last element to the first position.
- Shift all other elements one step to the right.

💡 Intuition:
-------------
- Save the last element in a temporary variable.
- Shift all elements from right to left by one position.
- Insert the last element at index 0.

🧠 Approach:
------------
1. Store the last element: `temp = nums[n-1]`.
2. Loop from `n-1` to `1`: shift `nums[i] = nums[i-1]`.
3. Set `nums[0] = temp`.

⏱️ Time Complexity: O(n)
- Each element is moved exactly once.

🗂️ Space Complexity: O(1)
- In-place rotation using only one temp variable.

⚠️ Common Mistakes to Avoid:
-----------------------------
- Forgetting to save the last element before overwriting.
- Incorrect loop bounds (e.g., starting from `n-2` instead of `n-1`).
- Accidentally using `i++` instead of `i--` when shifting right.
- Trying to use two pointers or reverse when it's not needed — this is a **simple right shift**.

✅ Tip:
- For left rotation: reverse the approach — shift left and put first element at the end.
- Use STL `rotate()` if you're allowed: `rotate(nums.rbegin(), nums.rbegin()+1, nums.rend());` (rotates clockwise)
*/

#include<bits/stdc++.h>
using namespace std;
void rotatearray(vector<int> &nums){

    int n = nums.size();
    int temp = nums[n-1];

    for(int i = n-1; i > 0; i--){
        nums[i] = nums[i-1];

    }
    nums[0] = temp;

}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    rotatearray(nums);

    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }

    return 0;

}