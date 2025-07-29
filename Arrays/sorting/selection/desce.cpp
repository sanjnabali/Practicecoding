//Sort the array in descending array

#include<iostream>
using namespace std;


void descendingsort(int arr[], int size){
    int n = size-1;
    for(int i = 0; i < n; i++){
        int index = i;

        for(int j = i+1; j<size; j++){
            if(arr[j] > arr[index]){
                index = j;
            }

            swap(arr[i], arr[index]);
        }
    }
}

int main(){
    int arr[] = {5, 2, 8, 1, 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    descendingsort(arr, size);
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
        }
        return 0;
        
}