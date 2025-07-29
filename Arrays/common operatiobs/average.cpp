//2: Calculate the average of elements in an array of size 18.

#include<iostream>
using namespace std;


double calculateaverage(int arr[], int n){
    int sum = 0;
    double average;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        average = 1.0 * sum / n;


    }
    return average;
    
}


int main(){
    int arr[18];
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The average of the array is: " << calculateaverage(arr, n) <<endl;

    return 0;


}