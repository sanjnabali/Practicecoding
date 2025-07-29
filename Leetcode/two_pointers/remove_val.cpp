#include<bits/stdc++.h>
using namespace std;

/*✅ Problem: Remove Element
Remove all instances of val from the array nums in-place and return the new length k.
The elements in the first k indices of nums[] should be the remaining valid elements (order can be changed).
✔️ In-place operation (no extra space)

✔️ Maintains valid elements at front

✔️ Time complexity = O(n)

✔️ Space complexity = O(1)
🔁 Pattern Name:
Fast–Slow Pointer Pattern (a subtype of Two Pointers)

Used when:

You're filtering or compacting elements

You want to keep valid elements and discard/remove unwanted ones
| i | nums\[i] | val | Action       | nums (in-place) | k |
| - | -------- | --- | ------------ | --------------- | - |
| 0 | 3        | 3   | skip         | \[3,2,2,3]      | 0 |
| 1 | 2        | 3   | nums\[0] = 2 | \[2,2,2,3]      | 1 |
| 2 | 2        | 3   | nums\[1] = 2 | \[2,2,2,3]      | 2 |
| 3 | 3        | 3   | skip         | \[2,2,2,3]      | 2 |
Use this pattern when:

You don't need to preserve all elements

You want to compress the array while preserving valid ones

You need O(1) space, no .erase() or extra vector
*/
int remove_element(vector<int>& nums, int val){
    int slow = 0;

    int n = nums.size();

    for(int fast = 0; fast < n; fast++){
        if(nums[fast] != val){
            nums[slow] = nums[fast];
            slow++;
        }

    }
    return slow;
}

int main(){
    vector<int> nums = {3,2,2,3};
    int val = 3;
    int result = remove_element(nums, val);
    for(int i = 0; i < result; i++){
        cout<<nums[i]<<" ";
        }
    return 0;

}