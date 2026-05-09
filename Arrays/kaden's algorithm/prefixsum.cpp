//find the prefix sum of an array
#include<iostream>
#include<vector>
using namespace std;

vector<int> prefixsum(vector<int>& arr){
    vector<int> prefix(arr.size());

    prefix[0] = arr[0];
    for(int i = 1; i<arr.size(); i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    return prefix;

}

vector<int> suffixsum(vector<int>& arr){
    vector<int> suffix(arr.size());

    suffix[arr.size()-1] = arr[arr.size()-1];
    for(int i = arr.size()-2; i>=0; i--){
        suffix[i] = suffix[i+1] + arr[i];
    }
    return suffix;

}

int main(){
    vector<int> arr = {3,4,-2,5,8,20,-10,8};
    vector<int> prefix = prefixsum(arr);
    vector<int> suffix = suffixsum(arr);

    cout<<"Prefix sum: ";
    for(int x : prefix){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"Suffix sum: ";
    for(int x : suffix){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}