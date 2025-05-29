#include<iostream>
using namespace std;

//function to find factorial of n number

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    int prev = factorial(n-1);
    return n*prev;
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    
}