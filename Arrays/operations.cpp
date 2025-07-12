#include <iostream>
using namespace std;

const int MAX = 100; // Maximum size of array

void insertionAtFirst(int arr[], int &n, int element) {
    if (n >= MAX) {
        cout << "Array overflow!" << endl;
        return;
    }
    for (int i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = element;
    n++;

    cout << "Array after insertion at beginning:" << endl;
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

void deletionAtFirst(int arr[], int &n) {
    if (n == 0) {
        cout << "Array is already empty!" << endl;
        return;
    }
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    n--;

    cout << "Array after deletion at beginning:" << endl;
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

void insertionAtEnd(int arr[], int &n, int element) {
    if (n >= MAX) {
        cout << "Array overflow!" << endl;
        return;
    }
    arr[n] = element;
    n++;

    cout << "Array after insertion at end:" << endl;
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

void insertionAtAnyPosition(int arr[], int &n, int element, int pos) {
    if (pos < 0 || pos > n || n >= MAX) {
        cout << "Invalid position or array overflow!" << endl;
        return;
    }
    for (int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = element;
    n++;

    cout << "Array after insertion at position " << pos << ":" << endl;
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

void deletionAtEnd(int arr[], int &n) {
    if (n == 0) {
        cout << "Array is already empty!" << endl;
        return;
    }
    n--;

    cout << "Array after deletion at end:" << endl;
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

void deletionAtAnyPosition(int arr[], int &n, int pos) {
    if (pos < 0 || pos >= n) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = pos + 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    n--;

    cout << "Array after deletion at position " << pos << ":" << endl;
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

void traversal(int arr[], int n) {
    cout << "Current array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[MAX] = {1, 2, 3, 4, 5};
    int n = 5;

    int element, pos, choice;

    cout << "------- MENU -------" << endl;
    cout << "1. Insertion at first position" << endl;
    cout << "2. Deletion at first position" << endl;
    cout << "3. Traversal" << endl;
    cout << "4. Insertion at end" << endl;
    cout << "5. Insertion at any position" << endl;
    cout << "6. Deletion at end" << endl;
    cout << "7. Deletion at any position" << endl;
    cout << "8. Exit" << endl;

    while (true) {
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to be inserted: ";
                cin >> element;
                insertionAtFirst(arr, n, element);
                break;

            case 2:
                deletionAtFirst(arr, n);
                break;

            case 3:
                traversal(arr, n);
                break;

            case 4:
                cout << "Enter the element to be inserted: ";
                cin >> element;
                insertionAtEnd(arr, n, element);
                break;

            case 5:
                cout << "Enter the element to be inserted: ";
                cin >> element;
                cout << "Enter the position (0-based index): ";
                cin >> pos;
                insertionAtAnyPosition(arr, n, element, pos);
                break;

            case 6:
                deletionAtEnd(arr, n);
                break;

            case 7:
                cout << "Enter the position to delete (0-based index): ";
                cin >> pos;
                deletionAtAnyPosition(arr, n, pos);
                break;

            case 8:
                cout << "Exiting..." << endl;
                return 0;

            default:
                cout << "Invalid choice. Try again!" << endl;
                break;
        }
    }

    return 0;
}
