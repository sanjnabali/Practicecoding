#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int target){

    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == target){
            return i;
        }

        
    }
    
    return -1;

}

int recursiveSearch(const vector<int>& arr, int target, int index = 0) {
    if(index == arr.size()) return -1; // Base case: target not found
    if(arr[index] == target) return index; // Found it
    return recursiveSearch(arr, target, index + 1); // Recur for next index
}


int main(){
    vector<int> arr = {10,45,23,65,90,54,33,80};
    int target = 90;

    int result = search(arr, target);

    int result2 = recursiveSearch(arr, target, 0);

    cout<<"the element is present at "<<result <<" index"<<endl;
    cout<<"the element is present at "<<result2 <<" index"<<endl;

    return 0;
}