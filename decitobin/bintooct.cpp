#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num; //1101
    int rem1, rem2;
    int dec = 0; 
    int oct = 0;
    int base1=1; int base2=1;
    while(num>0){ //1101>0
        rem1 = num % 10; //remainder   ->  1101 % 10 = 1 , -> 110 % 10 = 0 -> 11 % 10 =1 , -> 1 % 10 = 1
        num= num/10; //quotient  -> 1101/10 = 110 -> 110/10 = 11 -> 11/10 =1 -> 1/10 = 0
        dec = rem1 * base1 + dec; // -> 1 * 1 + 0 = 1, ans = 1 , ans = 0 * 2 + 1 = 1, ans = 1*4 + 1 = 5 -> ANS =1*8 + 5 = 13
        base1 = base1*2; // -> mul = 1*2=2, mul = 2*2=4, mul = 4*2 = 8 

    }//end because num is now equal to zero
    while(dec){
        rem2 = dec % 8; //rem2 = 13%8 -> 5, -> 1%10 = 1
        dec= dec/8; //dec = 13/8 = 1, -> 1/10 = 0
        oct = rem2 * base2 + oct; //oct = 5 * 1 + 0 = 5; -> 1 * 10 + 5 = 15
        base2 = base2*10; //base2 = 1*10=10

    }
    cout<<oct; //15
}
