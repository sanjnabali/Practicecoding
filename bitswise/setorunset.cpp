#include<bits/stdc++.h>
using namespace std;

//Check whether K-th bit is set or not

bool checkKthBit(int n, int k) {
    // Right shift n by k and check if the least significant bit is set
    return (n >> k) & 1;
}

// Set the K-th bit of n
int setKthBit(int n, int k) {
    // Use bitwise OR to set the k-th bit
    return n | (1 << k);
}

// Unset the K-th bit of n
int unsetKthBit(int n, int k) {
    // Use bitwise AND with the negation of the k-th bit
    return n & ~(1 << k);
}   

int main() {
    int n = 5; // Binary: 0101
    int k = 1;

    // Check if the k-th bit is set
    cout << "Is " << k << "-th bit set in " << n << "? " << (checkKthBit(n, k) ? "Yes" : "No") << endl;

    // Set the k-th bit
    n = setKthBit(n, k);
    cout << "After setting " << k << "-th bit: " << n << endl; // Should be 7 (0111)

    // Unset the k-th bit
    n = unsetKthBit(n, k);
    cout << "After unsetting " << k << "-th bit: " << n << endl; // Should be 5 (0101)

    return 0;
}

