#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int rem, ans=0;
    int mul = 1;
    while(num>0){
        rem = num % 10; //-> 15%10 =  5, -> 1%10 = 1
        num= num/10; // -> 15/10 = 1 -> 1/10 = 0
        ans = rem * mul + ans; //-> 5 *1+0 =5 -> 1*8+ 5 = 13
        mul = mul*8; //-> 1*8=8, 

    }
    cout<<ans<<endl;
}