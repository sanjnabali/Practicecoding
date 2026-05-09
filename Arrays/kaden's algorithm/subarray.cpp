/*
Kadane’s Algorithm is used to solve one famous problem in Data Structures and Algorithms:

Find the maximum sum of a contiguous subarray in an array.

A contiguous subarray means elements should be together.*/
#include <iostream>
#include <vector>
using namespace std;

void printsubarrays(vector<int> arr){

    for(int start=0; start<arr.size(); start++){
        for(int end=start; end<arr.size(); end++){
            for(int i = start; i<=end; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}

int main(){
    vector<int> arr = {1, 2, 3};
    printsubarrays(arr);
    return 0;
}
