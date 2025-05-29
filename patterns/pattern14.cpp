#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int row;
    char col;
    for(row=1;row<=n;row++){
        for(col='a'; col<='e'; col++){
            cout<<col;
        }
        cout<<endl;
    }
}