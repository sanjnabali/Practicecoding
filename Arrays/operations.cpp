#include <bits/stdc++.h>
using namespace std;

int main() {
    const int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    // 1. Inserting at the end
    int newElement = 6;
    int newArrEnd[n + 1];
    for (int i = 0; i < n; i++) {
        newArrEnd[i] = arr[i];
    }
    newArrEnd[n] = newElement;

    cout << "After inserting at the end: ";
    for (int i = 0; i < n + 1; i++) {
        cout << newArrEnd[i] << " ";
    }
    cout << "\n";

    // 2. Inserting at the beginning
    int newElement2 = 0;
    int newArrBegin[n + 1];
    newArrBegin[0] = newElement2;
    for (int i = 1; i < n + 1; i++) {
        newArrBegin[i] = newArrEnd[i - 1];
    }

    cout << "After inserting at the beginning: ";
    for (int i = 0; i < n + 1; i++) {
        cout << newArrBegin[i] << " ";
    }
    cout << "\n";

    // 3. Inserting at a specific position
    int position = 2; // index
    int newElement3 = 10;
    int newArrPosition[n + 2]; // Now total n+2 elements

    for (int i = 0; i < position; i++) {
        newArrPosition[i] = newArrBegin[i];
    }

    newArrPosition[position] = newElement3;

    for (int i = position + 1; i < n + 2; i++) {
        newArrPosition[i] = newArrBegin[i - 1];
    }

    cout << "After inserting at position " << position << ": ";
    for (int i = 0; i < n + 2; i++) {
        cout << newArrPosition[i] << " ";
    }
    cout << "\n";

    return 0;
}
