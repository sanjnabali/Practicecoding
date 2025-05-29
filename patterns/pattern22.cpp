#include<iostream>
using namespace std;
int main(){
    int n = 5;
    // for(int row=1; row<=n; row++){
    //     for(int space=1; space<row; space++){
    //         cout<<"  ";
    //     }

    //     for(int col=1; col<=2*(n-row)+1;col++){ //1<=2*(5-1)+1 = 2*4+1= 8+1=9 print 9 stars
    //         cout<<"* ";             //2<=2*(5-2)+1= 6+1=7 print 7 stars
    //     }
        
    //     cout<<endl;
    // }

    //another Method
    for(int row=n; row>=1; row--){
        for(int space = 1; space<=n-row;space++){
            cout<<"  ";
        }
        for(int star=1; star<=2*row-1;star++){
            cout<<"* ";
        }
        cout<<endl;
    }
}