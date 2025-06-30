// Task: In an array where every element appears twice except one, find that one.
#include <iostream>
using namespace std;

int singleNumber(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i];  // XOR operation to find the unique number 0000^0100 = 0100
        //4 ^ 1 = 0100^0001 = 0101
        //5 ^ 2 = 0101^0010 = 0111
        //7 ^ 1 = 0111^0001 = 0110
        //6 ^ 2 = 0110^0010 = 0100


    }
    return result; // Return the unique number found by XORing all elements

}

int main() {
    int arr[] = {4, 1, 2, 1, 2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int uniqueNumber = singleNumber(arr, n);
    
    cout << "The unique number is: " << uniqueNumber << endl; // Output: 4
    
    return 0;
}