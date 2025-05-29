#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int rem, ans=0;
    int mul = 1;
    while(num>0){
        rem = num % 2; //remainder //or using bitwise -> rem = num & 1;
        num= num/2; //quotient //or using bitwise -> num = num >> 1;
        ans = rem * mul + ans; 
        mul = mul*10;

    }
    cout<<ans<<endl;
}
// Your code tries to store that binary result like a decimal number: 10001001101 (which looks big!) and 
// stores that in an int.

// Now, if num is very big like 23451, the binary result will be large — more than 10 digits long — and 
// when you try to store that as int ans, it may exceed limit or not look like binary at all.
// //when the number is too long 
// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cin >> num;
//     string binary = "";

//     while(num > 0){
//         int rem = num % 2;
//         binary = to_string(rem) + binary;
//         num = num / 2;
//     }

//     cout << "Binary: " << binary << endl;
// }
// ✅ It never overflows
// ✅ It always gives correct binary
// ✅ It's memory-safe


