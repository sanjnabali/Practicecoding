#include<iostream>
#include<cctype>
using namespace std;

void touppercase(char arr[], int size){
    for(int i=0; i<size; i++){
        arr[i] = toupper(arr[i]);
    }
}

void toupperstring_array(char ar[][20], int strsize){
    for(int i = 0; i<strsize;i++){
        for(int j = 0; ar[i][j] != '\0'; j++){
            ar[i][j] = toupper(ar[i][j]);
        }
    }
}

int main(){
    // Part 1: Single characters
    char arr[] = {'a', 'b', 'c', 'd', 'e' };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for(int i = 0; i < size; i++){  
        cout << arr[i] << " ";
    }
    cout << endl;

    touppercase(arr, size);

    cout << "Uppercase array: ";
    for(int i = 0; i < size; i++){  
        cout << arr[i] << " ";
    }
    cout << endl;

    // Part 2: Modifiable strings
    char strarray[][20] = {"hello", "world", "example"};
    int strsize = sizeof(strarray) / sizeof(strarray[0]);

    cout << "Original string array: ";
    for(int i = 0; i < strsize; i++){
        cout << strarray[i] << " ";
    }
    cout << endl;

    toupperstring_array(strarray, strsize);

    cout << "Uppercase string array: ";
    for(int i = 0; i < strsize; i++){
        cout << strarray[i] << " ";
    }
    cout << endl;

    return 0;
}
