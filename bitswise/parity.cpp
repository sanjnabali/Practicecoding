//Task: Return "EVEN" or "ODD" depending on the number of set bits in n.

#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int n;
    cout << "Enter the number: ";
    cin >> n;

    bool parity = 0;               // 0 = even, 1 = odd
    while (n) {
        parity ^= (n & 1);         // toggle if the least-significant bit is 1
        n >>= 1;                   // move to next bit
    }

    cout << (parity ? "Odd" : "Even") << '\n'; 
    return 0;
} 
