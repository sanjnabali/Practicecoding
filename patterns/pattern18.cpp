#include<iostream>
using namespace std;
int main(){
    int n=5;

    for(int row=5; row>=1; row--){
        for(int col=5; col>=row; col--){
            cout<<col;

        }
        cout<<endl;
    }
}