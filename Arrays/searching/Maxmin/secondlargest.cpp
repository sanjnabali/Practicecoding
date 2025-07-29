//5: Find the second largest element in an array of unique elements of size n. Where n>3.
#include <bits/stdc++.h>
using namespace std;
//{12,45,23,89,38,99,56}
//arr[0] = 12
//n = 7
int findSecondLargest(int arr[], int n) {
    if (n < 2) { //n > 3 so skip this if block
        cout << "Invalid input. Array size must be greater than 1." << endl;
        return -1;
    }

    int largest = arr[0]; // assume largest element is the first element i.e. 12
    int secondLargest = INT_MIN; // initialize second largest element as negative infinity //update only when largest is updated

    for (int i = 1; i < n; i++) { // i = 1 //i=2 // i=3 //i=4 //i=5 // i=6
        if (arr[i] > largest) { //arr[1] = 45 > 12 true // arr[2] = 23 > 45 false //arr[3] = 89 > 45 true // arr[4] = 38 > 89 false// arr[5] = 99 > 89 true
            //arr[6] = 56 > 99 false
            secondLargest = largest; // secondlargest = 12 // secondlargest = 45  // secondlargest = 89
            largest = arr[i]; // largest = 45 //largest = 89 // largest = 99
        } else if (arr[i] > secondLargest && arr[i] < largest) { // arr[2] = 23 > 12 true //  arr[3] = 38 > 45 false // arr[6] = 56 > 89 false
            secondLargest = arr[i]; // secondlargest = 23 
        }
    }

    return secondLargest;  // return 89
}

int main() {
    int arr[] = {12, 45, 23, 89, 38, 99, 56};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondLargest(arr, n);
    cout << "The second largest element is: " << result << endl;

    return 0;
}

