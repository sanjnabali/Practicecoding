#include<iostream>
using namespace std;


int calcofdigit(int n){

    unsigned int product = 1;
    int sun = 0;

    int digit,  answer;

    while(n != 0){
        digit = n%10;
        product *= digit;
        sun += digit;
        n /= 10;

    }

    cout<<"the product of digits is: " << product << endl;
    cout<<"the sum of digits is: " << sun << endl;

    answer = product - sun;
    return answer;


}

int main(){
    int n;
    cout<<"enter the number:" <<endl;
    cin>>n;
    int result  = calcofdigit(n);
    cout<<"the difference between product and sum of digits is: " << result << endl;

    return 0;
}


