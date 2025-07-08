#include<bits/stdc++.h>
using namespace std;

int countdigits(int n){
    int count  = 0;

    while(n > 0){ // n >0, 15 > 0, 1>0
        count++; // count = 1, 2,3
        n/=10; // n = 153/10 = 15, 15/10 = 1, 1/10 = 0
    }
    return count; // count = 3
    // 153 has 3 digits
}

bool armstrongnumber(int num, int digit){
    int n = num, lastdigit;  // n = 153
    int ans = 0; 
    while(n){
        lastdigit = n%10; // lastdigit = 3, 5, 1
        n/= 10; // n = 15, 1, 0
        ans += (int)round(pow(lastdigit, digit));// ans = 3^3 + 5^3 + 1^3 = 27 + 125 + 1 = 153
        // ans = 153
    }

    if(ans == num) // if 153 == 153
    return 1; // true
    else 
    return 0; // false
    



}

int main(){
    int num;
    cout<<"enter a number:" <<endl;
    cin>>num; // num = 153


    int digit = countdigits(num); // digit = 3, as 153 has 3 digits

    cout<<armstrongnumber(num, digit) << endl;
    

    return 0;
}