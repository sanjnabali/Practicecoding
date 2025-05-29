#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i = 1; i<=n; i++){
        char alpha = 'a' + (i-1);
        for(int j = 1; j<=i; j++){
            cout<<alpha;
        }
        cout<<endl;
    }
}