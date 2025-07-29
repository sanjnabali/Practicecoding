#include <iostream>
#include <climits>

int findMaximum(const int arr[], int n) {
    int maxVal = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int findMinimum(const int arr[], int n) {
    int minVal = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main() {
    int arr[10] = {40, 45, 65, 78, 89, 32, 44, 56, 78, 99};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxVal = findMaximum(arr, n);
    int minVal = findMinimum(arr, n);

    std::cout << "Maximum element is " << maxVal << std::endl;
    std::cout << "Minimum element is " << minVal << std::endl;

    return 0;
}
