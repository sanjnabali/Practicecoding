#include <iostream>
#include <vector>
using namespace std;

pair<int,int> twoSingles(const vector<int>& nums) {
    int xorAll = 0;
    for (int v : nums) xorAll ^= v;        // Step 1

    int diffBit = xorAll & -xorAll;        // Step 2 (right-most set bit)

    int single1 = 0, single2 = 0;          // Step 3
    for (int v : nums) {
        if (v & diffBit)
            single1 ^= v;   // bucket 1
        else
            single2 ^= v;   // bucket 2
    }
    return {single1, single2};             // Step 4
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2, 3};   // 4 and 3 are unique
    auto [a, b] = twoSingles(nums);
    cout << "The two unique numbers are: " << a << " and " << b << endl;
    return 0;
}
