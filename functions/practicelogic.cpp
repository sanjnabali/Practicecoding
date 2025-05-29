#include<iostream>
using namespace std;

int findsum(int n){
    return n*(n+1)/2;
}

int main(){

    int num;
    cin>>num;

    cout<<findsum(num)<<endl;
}