#include<bits/stdc++.h>
using namespace std;
//{10,20,30,40,50,60,70,80}
int binarysearch(vector<int> &arr, int target, int low, int high) { // target = 70, low = 0, high = 7

    while (low <= high) { // 0 < 7 true // 4 < 7 true // 6 < 7 true
        int mid = low + (high - low) / 2; // mid = 3 // mid = 4 + (7 - 4) /2 = 4 + 3 / 2 = 4 + 1 = 5 // mid = 6 + (7 - 6)/2 = 6 + 1/2 = 6 + 0.5 = 6.5(6)

        // Check if x is present at mid
        if (arr[mid] == target) // arr[3] (i.e 40) == 70 false // arr[5] (i.e 60) == 70 false // arr(6) (i.e 70) == 70 true
        {
            return mid; // return 6
        }
 
        // If x greater, ignore left half
        if (arr[mid] < target) // arr[3] (i.e. 40) < 70 true // arr[5] (i.e. 60) < 70 true
            low = mid + 1; // low = 3 + 1  = 4  // low = 5 + 1  = 6

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;

}


int recursivebinary(vector<int> &arr, int target, int low, int high){
    

    if (high >= low) { // 7 >= 0 true // 7 >= 4 true
        int mid = low + (high - low) / 2; // mid = 3 // mid = 5

        // If the element is present at the middle
        // itself
        if (arr[mid] == target) // arr[3] i.e 40 == 70 false // arr[5] i.e 60 == 70 false
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > target) // arr[3] i.e 40 > 70 false // arr[5] i.e 60 > 70 false
            return recursivebinary(arr, low, mid - 1, target);

        // Else the element can only be present
        // in right subarray
        return recursivebinary(arr, mid + 1, high, target); // return recursivebinary(arr, 4, 7, 70) // return recursivebinary(arr, 6, 7, 70) so on 
        //return recursive(binary)(arr, 6, 7, 70)
    }
    return -1;

    


}

int main(){
    vector<int> arr = {10,20,30,40,50,60,70,80};
    int target = 70;

    int low = 0;
    int high = arr.size() - 1;

    int result1 = binarysearch(arr, target, low, high);
    int result2 = recursivebinary(arr, target, low, high);

    cout<<"the element is present at "<<result1 <<" index"<<endl;
    cout<<"the element is present at "<<result2 <<" index"<<endl;

    return 0;

}

