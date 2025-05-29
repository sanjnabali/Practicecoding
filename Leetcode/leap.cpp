#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool leapyear = 0;

    if(n%400 == 0){
        cout<<"It's a leap year";
    }
    else if(n%4 == 0 && n%100 !=0){
        cout<<"It's a leap year";
    }
    else{
        cout<<"It;s not a leap year";
    }
}