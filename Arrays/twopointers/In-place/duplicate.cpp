#include<bits/stdc++.h>
using namespace std;
//duplicate zeroes in {1,0,2,3,0,4,5,0} array without using extra space
//{0,1,2,3,4,5,6,7}
//{1,0,0,2,3,0,0,4}
void duplicateZeros(vector<int>& arr) {
        int n = arr.size(); // n = 8
        int possibleDups = 0; // 1
        int last = n - 1; // last = 7

        // Step 1: Count zeros that can be duplicated within array bounds
        for (int i = 0; i <= last - possibleDups; i++) { // i = 0, i< 7 -0 = 7 // i =1, 1 < 7 // i = 2, 2<= 7-1(6) // i = 3, 3<=6 // i = 4, 4<=6 // i = 5, 5<=7-2 -> 5 <= 5
            // at i = 6, 6 <= 7 - 2 = 5 // come out of loop as i is not less than 5
            if (arr[i] == 0) { // arr[0] = 1 - condition not met // arr[1] == 0 - condition met // arr[2] = 2  == 0 - condition not met // arr[3] = 3 != 0 condition not met
                //arr[4] = 0 == 0 - condition met // arr[5] = 4 != 0 - condition not met
                // Edge case: Zero at the boundary
                if (i == last - possibleDups) { // 1 == 7 - 0 = 7 - 1 != 7 - condition not met // if(4 == (7 - 1)) - condition not met
                    arr[last] = 0; 
                    last -= 1;
                    break;
                }
                possibleDups++;  // possibledups = 1 // possibledups = 2
            }
        }// first i = 0 condition not met // at i = 1 condition met // at i = 2 condition not met // at i = 3 condition not met// at i = 4 condition met //at i = 5 condition not met
//come out of loop after iteration 5 as condition fails at iteration 6
        // Step 2: Start backwards and copy with duplication
        //to avoid overwriting any element using backward method.
        int i = last - possibleDups; // i = 7 - 2 = 5 this is the starting point to backward - the only elements that comes under this size
        int j = last; // j = 7 - this is the original size of array.

        while (i >= 0) { // loop starts as i is greater than 0 5 >= 0 // as i is less than 0 condition fails loop stops
            if (arr[i] == 0) { //arr[5] = 4 != 0 - condition not met // arr[4] = 0 == 0 - condition met // arr[3] = 3 != 0 - condition not met // arr[2] = 2 != 0 - condition not met
                //arr[1] = 0 == 0 - condition met // arr[0] = 1 != 0 - condition not met
                arr[j--] = 0; // arr[6] <- 0 and reduce j by 1 i.e  j = 6-1 = 5 // arr[2] <- 0 and reduce j by 1 i.e j = 2-1 = 1
                arr[j--] = 0; // arr[5] <- 0 and reduce j by 1 i.e  j = 5-1 = 4 // arr[1] <- 0 and reduce j by 1 i.e j = 1-1 = 0
            } else { 
                arr[j--] = arr[i]; // j -> 7 arr[7] <- arr[5] = 4 and then reduce j by 1 i.e. j = 6 // j -> 4 arr[4] <- arr[3] i.e 3 and reduce j by 1 i.e j =  4-1 = 3
                 //arr[3] <- arr[2] i.e 2 and reduce j by 1 i.e j = 3-1 =2 // arr[0] <- arr[0] = 1 and reduce j by 1 i.e j = 0-1 = -1
            }
            i--; //i = 4 // i = 3 // i = 2// i = 1 // i = 0 // i = -1
        }
    } //loop stops when i becomes less than 0

int main(){
    vector<int> arr = {1,0,2,3,0,4,5,0};
    duplicateZeros(arr);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
        }
        return 0;
        
}
