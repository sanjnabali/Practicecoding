//Given a number n, find the cube root of n.
//Note : you need to print the floor value of the cube root.
//the complexity of this solution can be reduced to O(log n) using binary search.
//or O(1) using inbuilt functions.

//Time Complexity : O(log n)
//Space Complexity : O(1)

#include<bits/stdc++.h>
using namespace std;

int findcuberoot(int n){
    if(n == 0 || n == 1){
        return n;
    }

    int low = 0, high = n;
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low)/2;
       // int midcubed = mid * mid * mid; it will give integer overflow for large values of n
       int midcubed = n / mid;
       midcubed = midcubed / mid;

        if(midcubed == mid){
            return mid;
        }
        else if(midcubed < mid){
            high = mid - 1;
        }
        else{
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
/*⚠️ But There’s a Problem

The way you compute midcubed = n / (mid*mid) and compare it to mid works, but:

It’s not intuitive — readability suffers.

It doesn’t directly check if mid^3 <= n.

For some edge cases (like very large n, or when mid*mid > n), your logic may give incorrect comparisons.

*/

//We can still avoid overflow without dividing like that, by using 1LL for long long multiplication:
/*int findCubeRoot(int n) {
    if (n == 0 || n == 1) return n;

    int low = 0, high = n, ans = -1;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long midCubed = mid * mid * mid;

        if (midCubed == n) {
            return mid;
        }
        else if (midCubed < n) {
            ans = mid;       // store floor value
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}
If performance matters more than implementation detail, just use STL: O(1) time complexity
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n = 27;
    cout << (int)cbrt(n); // built-in O(1)
    return 0;
}

*/


int main(){
    int n = 27;
    cout<<findcuberoot(n);
    return 0;
}