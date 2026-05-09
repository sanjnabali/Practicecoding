//divide the array into two sub arrays such that the sum of both subarrays is equal
//the array is {3,4,-2,5,8,20,-10,8}
//brute force approach
//but we can solve this problem in O(n) time using prefix sum and suffix sum arrays
//right now it takes O(n^2) time complexity because of the nested loops
#include<iostream>
#include<vector>
using namespace std;

int equalsum(vector<int> arr){
    for(int start = 0; start<arr.size()-1; start++){  //

        int sum1 = 0, sum2 = 0;
        for(int part1 = 0; part1<=start; part1++){
            sum1+=arr[part1];
        }
        for(int part2 = start+1; part2<arr.size(); part2++){
            sum2+=arr[part2];
        }

        if(sum1 == sum2){
            return 1;

        }
    }
}

int main(){
    vector<int> arr = {3,4,-2,5,8,20,-10,8};
    cout<<equalsum(arr);
    return 0;
}
