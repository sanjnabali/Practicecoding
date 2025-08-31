#include<bits/stdc++.h>
using namespace std;

void insertionsort(vector<int> &arr){
    int n = arr.size();

    for(int i = 1; i<n; i++){
        for(int j = i; j>=0; j--){
            if(arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
            else{
                break;
            }
        }
    }

}

int main(){
    vector<int> arr = {5, 2, 8, 1, 9};
    insertionsort(arr);
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
        }
    
        return 0;
}