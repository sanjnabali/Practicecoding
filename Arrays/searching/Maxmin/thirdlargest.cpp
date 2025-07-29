#include <bits/stdc++.h>
using namespace std;

int thirdlargest(int arr[], int n) {
    if (n < 3) {
        cout << "Invalid input: array must have at least 3 elements.\n";
        return -1;
    }

    int max = arr[0];
    int secondmax = INT_MIN;
    int thirdmax = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            thirdmax = secondmax;
            secondmax = max;
            max = arr[i];
        }
        else if (arr[i] > secondmax && arr[i] != max) {
            thirdmax = secondmax;
            secondmax = arr[i];
        }
        else if (arr[i] > thirdmax && arr[i] != secondmax && arr[i] != max) {
            thirdmax = arr[i];
        }
    }

    return thirdmax;
}
