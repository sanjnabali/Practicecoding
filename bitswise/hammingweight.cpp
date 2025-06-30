//challenge 1: Count Set Bits (Hamming Weight)
//Count how many 1s are in the binary representation of a number n.

#include <iostream>
using namespace std;

int countSetBits(unsigned int n) {
    int count = 0;
    while (n) {
        count += (n & 1); // Increment count if the least significant bit is 1
        n >>= 1;          // Right shift to process the next bit
    }
    return count;
}
int printbinary(int n){
    int rem, ans=0;
    int mul = 1;
    while(n>0){
        rem = n % 2; //remainder //or using bitwise -> rem = num & 1;
        n= n/2; //quotient //or using bitwise -> num = num >> 1;
        ans = rem * mul + ans; 
        mul = mul*10;

    }
    cout<<ans<<endl;
}
int main() {    
    unsigned int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Number of set bits: " << countSetBits(n) << '\n';
    printbinary(n);
    return 0;

}