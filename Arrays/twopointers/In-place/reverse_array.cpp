#include<bits/stdc++.h>
using namespace std;

// 🔁 Approach: In-Place Array Reversal using XOR Swap
// 🧠 Logic: Swapping arr[start] and arr[end] using XOR (no temp variable used)
// 💡 Time Complexity: O(n) | Space Complexity: O(1)
// ⚠️ Caution: Ensure arr[start] and arr[end] are not the same index to avoid zeroing
// ✅ Use Case: Low-level memory-efficient reverse without extra space
/*
 Use XOR Swap Only When:
You're working in memory-constrained or low-level embedded systems (e.g., microcontrollers)

You want to avoid extra memory usage completely

You want to demonstrate cleverness in an algorithmic challenge — but know the risks

You're sure the two variables are not the same (or you check for it)

✅ Use swap() or Temp Variable When:
You're writing production or interview code

You prioritize clarity, robustness, and maintainability

Your values might be same (a == b)

You're working in high-level C++, using STL (std::swap() is optimized)*/

void reverse_array(int arr[], int n){

    int start = 0;
    int end = n-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;

    }

}

int main(){
    
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    reverse_array(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
    
}
