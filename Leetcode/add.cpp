#include<iostream>
using namespace std;
int main(){
    int num =38;
    int rem; 
   
    while(num>=10){
        int sum = 0;
        while(num!=0){
            rem = num%10;
            num = num/10;
            sum = sum + rem;
        }
       num = sum;
    }
    cout<<num;
}
//#include<iostream>
// using namespace std;

// int addDigits(int num) {
//     if (num == 0) return 0;
//     return 1 + (num - 1) % 9;
// }

// int main() {
//     int n;
//     cin >> n;
//     cout << "Single digit sum is: " << addDigits(n) << endl;
// }
