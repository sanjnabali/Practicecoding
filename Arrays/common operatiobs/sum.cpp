//1: Take 20 elements from user input and find its sum with the help of an array.

#include<iostream>
using namespace std;


int sum(int arr[], int n){

    int sum = 0;

    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[20], n = 20, i;
    cout<<"Enter 20 elements: ";
    for(i = 0; i<n; i++){
        cin>>arr[i];
    }
   
    cout<<"Sum of elements is: "<<sum(arr, n);
    return 0;
    
}