#include<bits/stdc++.h>
using namespace std;


int main(){
    int n = 3;

    char arr[] = {'A', 'B', 'C'};
    int totalSubsets = 1 << n; // 2^n using bitwise

    
    for (int mask = 0; mask < (1 << n); ++mask) {
        cout << std::bitset<3>(mask) << "  →  { ";
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i))           // is bit i on?
                cout << arr[i] << ' ';    
                // include that item
            
        }
        cout << "}\n";
    }
    cout << "Total Subsets: " << totalSubsets << endl;
    cout << "All subsets of { ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';  


    cout<<"} \n"<<endl;
    return 0;
}