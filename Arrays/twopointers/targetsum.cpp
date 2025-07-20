#include<bits/stdc++.h>
using namespace std;


int targetsum(vector<int>& nums, int target){
    int left = 0;
    int right = nums.size()-1;
    while(left < right){
        int sum = nums[left] + nums[right];
        if(sum == target){
            return true;
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }


}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    cout<<targetsum(nums, target);

    return 0;

}