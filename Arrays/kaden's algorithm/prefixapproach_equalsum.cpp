//the better approach to divide the array into two sub arrays such that the sum of both subarrays is equal
//the array is {3,4,-2,5,8,20,-10,8}
//we can solve this problem in O(n) time using prefix sum and suffix sum arrays
#include<iostream>
#include<vector>
using namespace std;

bool equalsum(vector<int>& arr){

    int totalSum = 0;

    // calculate total sum
    for(int x : arr){
        totalSum += x;
    }

    int prefixSum = 0;

    for(int i = 0; i < arr.size()-1; i++){

        prefixSum += arr[i];

        int suffixSum = totalSum - prefixSum;

        if(prefixSum == suffixSum){
            return true;
        }
    }

    return false;
}

int main(){

    vector<int> arr = {3,4,-2,5,8,20,-10,8};

    cout << equalsum(arr);

    return 0;
}