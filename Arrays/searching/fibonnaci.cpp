#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n <= 0) return -1;  // Invalid input
    if (n == 1) return 0;
    if (n == 2) return 1;

    vector<int> fib(n);     // Size is n
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n - 1];      // 1-indexed Fibonacci
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}
//if want O(1) space
/*
 int a = 0, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b; without using an array*/