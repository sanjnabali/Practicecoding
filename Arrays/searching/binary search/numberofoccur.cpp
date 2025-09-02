// //Given a sorted array, arr[] and a number target, you need to find the number of occurrences of target in arr[]. 

// #include <bits/stdc++.h>
// using namespace std;


// int findfirstoccurrence(vector<int>& arr, int target){

//     int n = arr.size();
//     int low = 0, high = n-1;
//     int firstoccurrence = -1;

//     while(low <= high){
//         int mid = low + (high-low)/2;

//         if(arr[mid] == target){
//             firstoccurrence = mid;
//             high = mid - 1;
//         }
//         else if(arr[mid] < target){
//             low = mid + 1;
//         }
//         else{
//             high = mid - 1;
//         }

//     }
//     return firstoccurrence;
// }

// int main(){
//     vector<int> arr = {1,1,2,2,2,2,3};
//     int target = 2;
//     int first = findfirstoccurrence(arr, target);
//     if(first == -1){
//         cout<<"The element is not present in the array"<<endl;
//     }
//     else{
//         int count = 0;
//         for(int i=first; i<arr.size(); i++){
//             if(arr[i] == target){
//                 count++;
//             }
//             else{
//                 break;
//             }
//         }
//         cout<<"The number of occurrences of "<<target<<" is "<<count<<endl;
//     }
//     return 0;
// }
//Optimized version
// To avoid the for loop in the above code, we can find the last occurrence of the target using binary search as well.
#include <bits/stdc++.h>
using namespace std;

int findFirst(vector<int>& arr, int target) {
    int n = arr.size();
    int low = 0, high = n-1, ans = -1;
    while (low <= high) {
        int mid = low + (high-low)/2;
        if (arr[mid] == target) {
            ans = mid;
            high = mid - 1; // search left
        }
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return ans;
}

int findLast(vector<int>& arr, int target) {
    int n = arr.size();
    int low = 0, high = n-1, ans = -1;
    while (low <= high) {
        int mid = low + (high-low)/2;
        if (arr[mid] == target) {
            ans = mid;
            low = mid + 1; // search right
        }
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return ans;
}

int main() {
    vector<int> arr = {1,1,2,2,2,2,3};
    int target = 2;

    int first = findFirst(arr, target);
    if (first == -1) {
        cout << "The element is not present in the array\n";
    } else {
        int last = findLast(arr, target);
        int count = last - first + 1;
        cout << "The number of occurrences of " << target << " is " << count << endl;
    }
    return 0;
}
