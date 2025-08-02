/*Given an array arr[], find the first repeating element. 
The element should occur more than once and the index of its first occurrence should be the smallest.

Note:- The position you return should be according to 1-based indexing. 
//array, hash
Hashing is a technique used to map data to a specific location (index) in a hash table using a hash function.

It's like putting data in labeled buckets so you can access it almost instantly (in O(1) time).

It lets you:

Store

Retrieve

Check existence

...of elements in constant time, on average.
| Task                        | Hashing Is Useful? | Why?                    |
| --------------------------- | ------------------ | ----------------------- |
| Count frequency of elements | ✅                  | Use hash map/dictionary |
| Check if an element exists  | ✅                  | Fast lookup             |
| Find first unique element   | ✅                  | Track counts and order  |
| Detect duplicates           | ✅                  | Store seen elements     |
| Anagram detection           | ✅                  | Count letters with hash |
// 💡 Hashing is used for fast lookups, frequency counting, uniqueness checking, etc.
// 🔧 Use unordered_map<Key, Value> for key-value storage
// 🔧 Use unordered_set<Key> for checking if an item exists
// ⏱️ Avg Time Complexity: Insert, Search = O(1)
// ❗ Great for problems involving: duplicates, frequencies, unique items, anagrams, etc.

Constraints:
1 ≤ arr.size() ≤ 106
0 ≤ arr[i] ≤ 106
*/

#include<bits/stdc++.h>
using namespace std;

int firstRepeatingElement(vector<int> &arr) {
    unordered_map<int, int> firstIndex; // element → first index
    unordered_map<int, int> freq;       // element → count
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        if (firstIndex.find(arr[i]) == firstIndex.end()) {
            firstIndex[arr[i]] = i; // store first occurrence
        }
        freq[arr[i]]++; // count frequency
    }

    int minIndex = INT_MAX;
    for (auto it : freq) {
        if (it.second > 1) {
            minIndex = min(minIndex, firstIndex[it.first]);
        }
    }

    return (minIndex == INT_MAX) ? -1 : minIndex + 1; // +1 for 1-based indexing
}

int main(){
      vector<int> arr = {1, 5, 3, 4, 3, 5, 6};
    cout << firstRepeatingElement(arr) << endl; // Output: 2

    vector<int> arr2 = {1, 2, 3, 4};
    cout << firstRepeatingElement(arr2) << endl; // Output: -1
}

/*
// ✅ First Repeating Element - Hashing Approach
// 1. Track first index of each element using unordered_map<int, int>
// 2. Count frequencies
// 3. Among elements with freq > 1, return the smallest index + 1 (1-based indexing)
// ⏱️ Time: O(n), Space: O(n)
*/