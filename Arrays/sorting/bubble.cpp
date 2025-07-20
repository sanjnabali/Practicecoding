#include<bits/stdc++.h>
using namespace std;


void bubblesort(vector<int> &arr, int n){
    n = arr.size();

    bool swapped = false;

    for(int i = 0; i < n-1; i++){
        swapped = false;

        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                arr[j] = arr[j] ^ arr[j+1];
                arr[j+1] = arr[j] ^ arr[j+1];
                arr[j] = arr[j] ^ arr[j+1];
                swapped = true;
            
            }

        }

        if(swapped == false){
            break;
        }
    
    }
}

void printarray(vector<int> &arr, int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";

    }

}

int main(){
    vector<int> arr = {5,6,1,3};
    int n = arr.size();
    bubblesort(arr, n);

    printarray(arr, n);
    return 0;

}