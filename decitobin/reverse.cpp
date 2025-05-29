#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int arr[5]= {3,6,4,2,5};
    int ans = 0;

    for(int i = 0; i<=4; i++){
        ans = arr[i]*pow(10,i)+ans; 
    }
    cout<<ans;
}