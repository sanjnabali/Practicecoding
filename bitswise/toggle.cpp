//Task: Given n and position k, flip the bit at position k (0-indexed from LSB).

#include <iostream>
using namespace std;

int toggleBit(int n, int k) { //8 0
    return n ^ (1 << k);  // 8 ^ 1<<0 -> 8 ^ 1 -> 1000 ^ 0001 -> 1001 ->9
}

int main(){
    cout<<toggleBit(8, 0) << endl; // Output: 9
    cout<<toggleBit(8, 1) << endl; // Output: 10
}