#include <iostream>
using namespace std;

int main() {
    int arr[6];
    int length = 0;

    // Insert 0, 1, 2
    for (int i = 0; i < 3; i++) {
        arr[length++] = i;
    }

    cout << "Array elements after insertion:" << endl;
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Insert 3 at the end
    arr[length++] = 3;

    // Insert 4 at the beginning
    for (int i = length - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = 4;
    length++;

    cout << "Array after inserting at end and beginning:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
