//🧠 This is a forward-moving two pointer technique — often referred to as fast and slow pointer.
/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.

Constraints:

1 <= nums.length <= 3 * 104
-100 <= nums[i] <= 100
nums is sorted in non-decreasing order.
|fast| nums\[fast] | nums\[slow] | Equal? | Action                   | nums (after)     | slow |
| - | -------- | -------- | ------ | ------------------------ | ---------------- | - |
| 1 | 1        | 1        | Yes    | skip                     | \[1, 1, 2, 3, 3] | 0 |
| 2 | 2        | 1        | No     | i++, nums\[i] = nums\[j] | \[1, 2, 2, 3, 3] | 1 |
| 3 | 3        | 2        | No     | i++, nums\[i] = nums\[j] | \[1, 2, 3, 3, 3] | 2 |
| 4 | 3        | 3        | Yes    | skip                     | \[1, 2, 3, 3, 3] | 2 |

*/
//Slow pointer → tracks where to place the next unique value
//Fast pointer → scans ahead to find a new unique number

#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums){
    if(nums.empty()) return 0;

    int slow = 0; //means first unique value is already accepted

    for(int fast = 1; fast < nums.size(); fast++){ //fast = 1 means start comparing from the second element onwards
        if(nums[slow] != nums[fast]){// nums[slow] = nums[0] = 0 != nums[fast] = nums[1] = 0 //nums[0] = 0 != nums[2] = 1 //
            slow++; //slow = 1
            nums[slow] = nums[fast]; //nums[1] = nums[2] i.e 0 = 1
        }
    }
    return slow + 1;
}

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int k = removeDuplicates(nums);
    cout<<"Number of unique elements: "<<k<<endl;
    return 0;
}