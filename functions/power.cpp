#include<iostream>
using namespace std;

//function to calculate n raise to power of p
//calculate 2 raise to power of 4 
//n = 2, p = 4

int powerofnumber(int number, int power){
    if(power == 0){   //neglect because number is currently 2
        return 1;
    }
    int prev = powerofnumber(number, power-1); // 
    return number * prev;
}
int main(){
    int number, power;
    cout<<"enter a number"<<endl;
    cin>>number;
    cout<<"enter the power"<<endl;
    cin>>power;
    cout<<number<<" raised to the power of "<<power<<" is "<<powerofnumber(number,power)<<endl;
    return 0;
}