//little girl tanya is trying to learn to decrease a number by 1 , but she is doing it in a wrong way with a number with two or more than two digits
//tanya use two algorithms - first if number has last digit non-zero she decreases the number by 1
//and if last digit is zero she divides the number by 10 i.e . removes the last digit
//you are given a number n,  tanya will subtract 1 from it k times.your task is to print the result after k subtractions.
//the result will be positive integer.
//the first input line contains the integer number n and k (2<=n<=10^9, 1<=k<=50)
//output  print one integer number - the result of the decreasing n by one k times
//for example: input : 512  4
//output : 50   // because 512-1=511, 511-1=510, 510/10=51, 51-1=50

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    for(int i = 0; i<k; i++){
        if(n <= 0){
            throw invalid_argument("Result cannot be negative or zero.");
        }
        else if(n%10 != 0){
            n -=1;
        }
        else{
            n/=10;
        }

    }
    cout << n << endl;
    return 0;
}