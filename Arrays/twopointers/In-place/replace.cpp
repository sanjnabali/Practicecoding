#include<bits/stdc++.h>
using namespace std;

/*
Given an array arr, replace every element in that array with the greatest element among the elements to its right, 
and replace the last element with -1.

After doing so, return the array.
✅ Intuition Behind Optimal Right-to-Left Solution
Imagine standing at the last element and looking backward:

The last element has no right, so set it to -1.

For every element to the left, ask:

"What was the max value to the right of me?"

Keep a running tracker of the max so far (maxRight).

At each step:

Save current value to temp

Replace current with maxRight

Update maxRight = max(maxRight, temp)

int current = arr[i];   // save before overwriting
arr[i] = maxRight;      // use previously known max
maxRight = max(maxRight, current); // update max
Whenever you're asked to look at elements to the right, reverse traversal is a go-to pattern.

If you need to track max, min, sum, etc., consider using:

One pass + rolling variable

Stack or Deque if windowing is involved

Watch for edge elements (first/last) that may need special handling

*/
void replace(vector<int> &nums){
    int n = nums.size();
    int maxright = -1;

    for(int i = n-1; i >= 0; i--){
        int current = nums[i];
        nums[i] = maxright;

        if(current > maxright){
            maxright = current;
        }

    }
    
}

int main(){
    vector<int> nums = {3, 2, 1, 5, 6};
    replace(nums);
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;
}