//Selection Sort Algorithm to sort the array of char in ascending order.
#include<iostream>
using namespace std;


void charsort(char arr[], int size){
    for (int i = 0; i < size-1; i++)
    {
        int min_index = i;
        for(int j = i+1; j<size; j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
            
        }
         swap(arr[i], arr[min_index]);
    }
    
}

int main(){
    char arr[] = {'b', 'a', 'c', 'd', 'e'};
    int size = sizeof(arr)/sizeof(arr[0]);

    charsort(arr, size);
    cout << "Sorted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        }

    return 0;
}