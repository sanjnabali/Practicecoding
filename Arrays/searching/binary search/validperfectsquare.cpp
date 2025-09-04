/*Given a positive integer num, return true if num is a perfect square or false otherwise.

A perfect square is an integer that is the square of an integer. In other words, 
it is the product of some integer with itself.

You must not use any built-in library function, such as sqrt.
*/
#include<bits/stdc++.h>
using namespace std;


bool isPerfectSquare(int num){
    if(num == 1) return true;

    int low = 1, high = num/2;
    while(low <= high){
        long long mid = low + (high - low)/2;

        long long sq = mid * mid;
        if(sq == num) return true;
        else if(sq < num) low = mid + 1;
        else high = mid - 1;

     }
     return false;
}
int main(){
    int num;
    cin>>num;

    
    if(isPerfectSquare(num)) cout<<" is a perfect square";
    else cout<<" is not a perfect square";
    return 0;
}