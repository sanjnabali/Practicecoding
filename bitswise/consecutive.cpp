#include<bits/stdc++.h>
using namespace std;


int findconsecutiveones(vector<int> &nums){

    int currentCount = 0;
    int maxCount = 0;
    int prev = -1;

    for(int i = 1; i < nums.size(); i++){
        if(nums[prev] ^ nums[i] == 0){
            currentCount++;
        }else{

            maxCount = max(maxCount, currentCount);
            currentCount = 1; // Reset count for the new number
        }
        prev = i;


        }
        return max(maxCount, currentCount);
}

int main(){
    vector<int> nums = {1, 1, 0, 0, 1, 1, 1, 0, 0, 1};
    int result = findconsecutiveones(nums);
    cout << "Maximum consecutive ones: " << result << endl;
    return 0;
}
