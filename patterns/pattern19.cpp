#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:"<<endl;
    cin>>n;

    for(int row = 1; row<=n; row++){
        for(int col=1; col<=n-row; col++){
            cout<<" ";
        }
        
        for(int col=1; col<=row; col++){
            char alpha = 'A' + col-1;
            cout<<alpha;
        }
        cout<<endl;
    }
}