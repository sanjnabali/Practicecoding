// Task: Reverse the binary bits of a 32-bit unsigned integer.

#include<iostream>
using namespace std;



unsigned int reverseBits(unsigned int n) {
    unsigned int result = 0;

    for (int i = 0; i < 32; i++) {
        result <<= 1;        // Shift result left to make space   //0000 << 1 -> 0000
        result |= (n & 1);   // Copy last bit of n into result //0000 | 1 -> 0001
        n >>= 1;             // Shift n right to get the next bit // 100 >> 1 -> 10
    }

    return result;
}

void printBinary(unsigned int n) {
    for (int i = 31; i >= 0; i--) {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}

int main() {
    unsigned int n;
    cout << "Enter the number to reverse: ";
    cin >> n;

    cout << "Original Binary: ";
    printBinary(n);

    unsigned int reversed = reverseBits(n);

    cout << "Reversed Binary: ";
    printBinary(reversed);

    cout << "Reversed Number: " << reversed << endl;

    return 0;
}
