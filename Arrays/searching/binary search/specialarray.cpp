/*You are given an array nums of non-negative integers. 
nums is considered special if there exists a number x 
such that there are exactly x numbers in nums that are greater than or equal to x.

Notice that x does not have to be an element in nums.

Return x if the array is special, otherwise, return -1. It can be proven that if nums is special, the value for x is unique.
*/


#include <bits/stdc++.h>
using namespace std;

int specialArray(vector<int>& nums){ //taking the vector to be passed by reference
    int n = nums.size(); // n = size of the array
    sort(nums.begin(), nums.end()); //sorting the array

    for(int i = 1; i<=n; i++){ // starting from 1 to n
        //finding the lower bound of i
        auto it = lower_bound(nums.begin(), nums.end(), i); //iterator is pointing to the first element which is >= i 
        //iterator is used to traverse the array and it is used as a pointer to point to the address of the STL container

        int count = nums.end() - it; //count of elements >= i
        //nums.end() gives the address of the next element after the last element of the array
        

        //check condition
        if(count == i) return i;



    }
    return -1;
}

int main(){
    vector<int> nums = {3,5};
    cout<<specialArray(nums);
    return 0;
}