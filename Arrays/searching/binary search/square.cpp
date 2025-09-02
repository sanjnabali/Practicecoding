/*
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. 
The returned integer should be non-negative as well.*/
#include<bits/stdc++.h>
using namespace std;

int squares(int x){
    if(x==0 || x==1){
        return x;
    }
    int start = 1, end = x;
    int ans = 0;
    while(start <= end){
        int mid = start + (end - start) / 2;

        if(mid == x/mid){
            return mid;
        }
        else if(mid < x/mid){
            start = mid + 1;
            ans = mid;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int x = 8;
    cout<<squares(x);
    return 0;
}