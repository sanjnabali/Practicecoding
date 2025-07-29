#include<bits/stdc++.h>
using namespace std;
//sort the array in ascending order

void selection(int arr[], int size){
    //{0 , 1, 2,3,4} // size = 5
    //{12,11,13,5,6}
    //rounds = size - 1 = 4

    for(int i = 0; i < size-1; i++){ //i = 0 till i < 5-1 = 4 //i = 0+1, 1 //i= 1+1, 2
        //i = 3 //i = 4
        int index = i; // index = 0 //index = 1 //index = 1 // index = 3//index = 4
        for(int j = i+1; j < size; j++){ // j = 1 till j<5 // j = 2 //j=3 //j=4 
            if(arr[j] < arr[index]){ //at j = 1 in array we have 11 which is less than 12
                //arr[2] = 13 < arr[1] condition fails // arr[3] = 5 < arr[1] true
                //arr[4] = 6 < arr[3] condition fails

                index = j; // change the smallest index = 1 //skip // change index = 3 //skip
            }
            if(index != i) { // if index (1) is not equal to 0 i.e i then swap// now index(1) == 1 skip this if too.
//index i.e 3 != 2 so swap that element // index(3) != 3 skip this if too
            swap(arr[i], arr[index]);
        }
            


        }
        
    }
}

int main(){
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    selection(arr, size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";

    }
    return 0;
}