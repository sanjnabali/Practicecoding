//Sort in decreasing order using insertion sort
#include<bits/stdc++.h>
using namespace std;

void decreasingsort(vector<int> &arr){
    int n = arr.size();

    for(int i = 1; i<n; i++){
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && key > arr[j]){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(){
    vector<int> arr = {3,1,2,4,5};
    decreasingsort(arr);
    for(int i = 0; i<arr.size(); i++){
    cout << arr[i] << " ";
    }
    return 0;
}