#include<iostream>
using namespace std;
int main(){
    int array[5] = {3,6,2,4,5};
    int ans=0;
    //reversing
    // for(int i = 4; i>=0; i--){
    //     ans = ans*10+array[i];

    // }
    //traverse
    for(int i = 0; i<=4; i++){
        ans = ans*10+array[i];
    }
    cout<<ans;

}