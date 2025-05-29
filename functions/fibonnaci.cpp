#include<iostream>
using namespace std;

// Function to calculate the nth Fibonacci number

int fibonacci(int n){
    if(n==0||n==1) return n;

    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
}