/*Given a sorted array, arr[] and a number target, you need to find the number of occurrences of target in arr[]. 
Constraints:
1 ≤ arr.size() ≤ 106
1 ≤ arr[i] ≤ 106
1 ≤ target ≤ 106
*/
#include<bits/stdc++.h>
using namespace std;
int countfreq(vector<int> &nums, int target) {
    int count = 0;

    int n = nums.size();

    for(int i = 0; i < n; i++) {
        if(nums[i] == target) {
            count++;
        }
    }
    return count;


}

int main(){
    vector<int> nums = {1,2,3,2,3,4};
    int target = 2;
    cout<<countfreq(nums, target)<<endl;

    return 0;
}