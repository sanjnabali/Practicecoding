#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num; //1101

    int rem, ans=0;
    int mul = 1;
    while(num>0){ //1101>0
        rem = num % 10; //remainder   ->  1101 % 10 = 1 , -> 110 % 10 = 0 -> 11 % 10 =1 , -> 1 % 10 = 1
        num= num/10; //quotient  -> 1101/10 = 110 -> 110/10 = 11 -> 11/10 =1 -> 1/10 = 0
        ans = rem * mul + ans; // -> 1 * 1 + 0 = 1, ans = 1 , ans = 0 * 2 + 1 = 1, ans = 1*4 + 1 = 5 -> ANS =1*8 + 5 = 13
        mul = mul*2; // -> mul = 1*2=2, mul = 2*2=4, mul = 4*2 = 8 

    }//end because num is now equal to zero
    cout<<ans;
}