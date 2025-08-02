/*Given an unsorted array arr[] and two elements num1 and num2. 
The task is to count the number of elements that occur between the given elements (excluding num1 and num2).
 If there are multiple occurrences of num1 and num2, we need to consider the leftmost occurrence of num1 and the rightmost occurrence of num2.
 Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1).

Constraints:
2 ≤ arr.size() ≤ 106
1 ≤ arr[i], num1, num2 ≤ 106
*/
#include<bits/stdc++.h>
using namespace std;


int getcount(vector<int> &nums, int nums1, int nums2){
    int first_index = -1;
    int second_index = -1;

    for(int i = 0; i<nums.size(); i++){
        if(nums[i] == nums1 && first_index == -1){
            first_index = i;
        }
        if(nums[i] == nums2){
            second_index = i;
        }
    }
    if(first_index == -1 || second_index == -1 || first_index > second_index){
        return 0;
    }

    return second_index - first_index - 1;
}

int main(){
    vector<int> nums = {10,12,34,56,33,22};
    int nums1 = 12;
    int nums2 = 33;
    cout<<getcount(nums, nums1, nums2)<<endl;
    return 0;
    
}