//comparing the usage of vector<bool>, vector<int>, vector<char> in terms of memory efficiency and performance.
#include <iostream>
#include <vector>
#include <bitset>
#include<bits/stdc++.h>
using namespace std;

template <typename Vec>
void show_memory(const string& name, const Vec& v) {
    cout << left << setw(15) << name
         << " : size = "     << v.size()
         << ", capacity = "  << v.capacity()
         << ", approx-bytes = "
         << (v.capacity() * sizeof(typename Vec::value_type))
         << '\n';
}

int main(){
    const size_t N = 8; 
     /*------------------------------------------------------------
      1. Build identical “on / off” arrays with three containers
    ------------------------------------------------------------*/
    vector<int> vi(N, 1);
    vector<char> vc(N, 1);
    vector<bool> vb(N, true);

    cout << "Memory usage of different containers:\n";
    show_memory("vector<int>", vi);
    show_memory("vector<char>", vc);
    show_memory("vector<bool>", vb);
    cout << "\n";
    /*------------------------------------------------------------
      2. Compare the memory usage of bitset and vector<bool>
    ------------------------------------------------------------*/
    bitset<N> bs; // Default initializes all bits to 0
    cout << "Memory usage of bitset<" << N << ">:\n";
    cout << left << setw(15) << "bitset<8>"
         << " : size = " << vb.size()
         << ", fixed-bytes = " << sizeof(vb)
         << " (fixed at compile-time)\n";
    /*------------------------------------------------------------
      3. Compare the memory usage of bitset and vector<bool>
    ------------------------------------------------------------*/
    cout << "Memory usage of vector<bool>:\n";  
    show_memory("vector<bool>", vb);
    cout << "\n";
    return 0;

}