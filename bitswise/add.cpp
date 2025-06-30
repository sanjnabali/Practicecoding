// Add two integers using only bitwise operators.
#include <iostream>
using namespace std;

int add(int a, int b){
    while(b !=0){  // Loop until there is no carry left 
        //b = 3
        // Calculate carry and sum using bitwise operations
        // XOR gives the sum without carry, AND gives the carry
        // Shift the carry left by one to add it in the next higher bit position
        // Update a to the new sum and b to the carry
        
        int sum = a ^ b; // XOR operation gives sum without carry  sum = 2^3 = 10 ^ 11 = 01 = 1,  sum = 1 ^ 4 = 01 ^ 100 = 101 = 5
        b = (a & b) << 1; // AND operation gives carry, shifted  // b = (2&3) (10&11) = 10 << 1 = 100 = 4, b = (1&4) (01&100) = 000 >> 1 =  0
        // 
        a = sum; // Update a to the new sum // now a = 1
        // a = 1, b=4
        // a = 5, b=0


    }
    return a; // When b becomes 0, a contains the final sum
}

int main(){
    int a = 2;
    int b = 3;
    cout<<"sum of a and b is :" <<add(a, b) << endl;
    return 0;
}