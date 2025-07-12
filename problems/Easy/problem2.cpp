//Given four positive integers A, B, C, D, determine if there’s a rectangle such that the lengths of its sides are A, B, C and D (in any order).

//If any such rectangle exist return 1 else return 0.

#include<iostream>
using namespace std;


int solve(int A, int B, int C, int D){

    if(A==B && C==D || A == C && B == D || A == D && B == C){
        return 1;
    }
    else{
        return 0;
    }

}


int main(){
    //take input from user

    int a, b, c, d;
    cin>>a>>b>>c>>d;

    if(solve(a, b, c, d) == 1){
        cout<<"this can form a rectangle \n";
    }
    else{
        cout<<"this cannot form a rectangle";
    }

    return 0;




}