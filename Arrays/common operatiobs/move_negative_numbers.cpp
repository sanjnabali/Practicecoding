//Move negative numbers to the end of an array

#include<bits/stdc++.h>
using namespace std;

void moveNegativesToEnd(int arr[], int n) {

    int slow = 0;

    for(int j = 0; j<n; j++){
        if(arr[j] >= 0){
            swap(arr[slow], arr[j]);
            slow++;

          }

    }


}

int main(){
    int arr[] = {-1, 2, -3, 4, -5};
    int n = sizeof(arr)/sizeof(arr[0]);
    moveNegativesToEnd(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
        }
        return 0;
}