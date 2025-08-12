#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
    int n = haystack.size();
    int m = needle.size();

    // Edge case: if needle is longer than haystack
    if (m > n) return -1;

    // Slide over haystack
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        // Compare characters one-by-one
        while (j < m && haystack[i + j] == needle[j]) {
            j++;
        }
        // If we matched the whole needle
        if (j == m) return i;
    }
    return -1;
}

int main() {
    string haystack = "sadbutsad";
    string needle = "sad";
    cout << strStr(haystack, needle) << endl;  // Output: 0

    haystack = "leetcode";
    needle = "leeto";
    cout << strStr(haystack, needle) << endl;  // Output: -1
}
