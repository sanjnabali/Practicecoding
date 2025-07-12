#include<iostream>
using namespace std;

void findFactors(int n) {
    if (n == 0) {
        cout << "All numbers are factors of 0 (infinite factors)." << endl;
        return;
    }

    cout << "The factors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    findFactors(num);

    return 0;
}
