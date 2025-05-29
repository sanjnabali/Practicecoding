#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    while(n!=0){
        int rem;
        rem = n%10;
        n=n/10;
        // Check for overflow before actually multiplying
        if(ans > INT32_MAX/10 || (ans == INT32_MAX / 10 && rem > 7)) return 0;
        if(ans < INT32_MIN/10 || (ans == INT32_MIN / 10 && rem < -8)) return 0;

        ans = ans * 10 + rem;
       

    }
    cout<<ans;
}