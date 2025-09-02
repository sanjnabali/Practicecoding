/*
Given an array arr of only 0's and 1's. 
The array is sorted in such a manner that all the 1's are placed first and 
then they are followed by all the 0's. Find the count of all the 0's.*/

#include <bits/stdc++.h>
using namespace std;


int findcountofzeros(vector<int>& arr){
    int n = arr.size(); // n = 7
    int low = 0, high = n - 1; // 0 to 6
    int FirstZeroIndex = -1;

    while(low <= high){ // 0 <= 6 // 4<=6 // 4<=4 // 4<=3 false
        int mid = low + (high - low)/2; // mid = 0+(6-0)/2 = 3  // mid = 4+(6-4)/2 = 5 //mid = 4+(4-4)/2 = 4

        if(arr[mid] == 0){ //arr[3] == 0 false //arr[5] == 0 true // arr[4] == 0 true
            FirstZeroIndex = mid; // FirstZeroIndex = 5 // FirstZeroIndex = 4
            high = mid-1; // high = 5-1 = 4 // high = 4-1 = 3
        }
        else{
            low = mid + 1; // low = 3+1 = 4
        }
    }
    if(FirstZeroIndex == -1){
        return 0;
    }
    return n - FirstZeroIndex; // 7 - 4 = 3
}

int main(){
    vector<int> arr = {1,1,1,1,0,0,0}; // n = 7
    cout << findcountofzeros(arr) << endl;
    return 0;
}