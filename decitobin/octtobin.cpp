#include<iostream>
using namespace std;
int main(){

    //oct to decimal
    int num;
    int rem1,rem2;
    int dec=0;
    int base1=1;
    int bin = 0;
    int base2=1;
    cout<<"Octal to decimal"<<endl;
    cout<<"Enter the octal number"<<endl;
    cin>>num;

    while(num>0){
        rem1 = num%10;
        num = num/10;
        dec = dec + base1 * rem1;
        base1 = base1*8;
    }
    cout<<"Octal to decimal number is :" <<dec<<endl;

    while(dec){
        rem2 = dec%2;
        dec = dec/2;
        bin = bin + base2 * rem2;
        base2 = base2*10;
    }
    cout<<"Decimal to binary is:" <<bin<<endl;


}