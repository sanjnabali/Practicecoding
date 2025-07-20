//move all zeros to end maintain thr order of non-zero elements
//given array -> [0,1,0,3,12]
//Must do in-place without making a copy of array
//Minimize total number of operations
//output = [1,3,12,0,0]

#include<bits/stdc++.h>
using namespace std;

void moveZeros(vector<int>& nums){
    int slow = 0;
    
    for(int fast = 0; fast < nums.size(); fast++){
        if(nums[fast] != 0){
            int temp = nums[slow];
            nums[slow] = nums[fast];
            nums[fast] = temp;
            slow++;
        }
    }
}

int main(){
    vector<int> nums = {0,1,0,3,12};
    moveZeros(nums);
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
        }
return 0;


}