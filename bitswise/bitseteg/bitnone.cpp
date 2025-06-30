#include<bits/stdc++.h>
using namespace std;

int main(){

    bitset<5> bnum(0);

    int result = bnum.none(); // Check if none of the bits are set to 1

    // none() returns true if all bits are 0, false if at least one bit is 1
    cout << "Checking if none of the bits are set to 1: " << endl;

    if(result) {
        cout << "None of the bits are set to 1." << endl;
    } else {
        cout << "At least one bit is set to 1." << endl;
    }

    //accessing the bits
    cout << "Accessing bits using operator[]:" << endl;
    for(int i = 0; i < bnum.size(); ++i) {
        cout << "Bit " << i << ": " << bnum[i] << endl; // Access each bit using operator[]
    }

    cout<<bnum[2] << endl; // Accessing the 3rd bit (index 2) of the bitset
    cout<<bnum.test(3) << endl; // Testing if the 4th bit (index 3) is set to 1

    bnum.set(2);
    bnum.set(3); // Setting the 3rd and 4th bits (index 2 and 3) to 1

    bnum.reset(1); // Resetting the 2nd bit (index 1) to 0
    bnum.flip(0); // Flipping the 1st bit (index 0)

    cout << "After modifications:" << endl;
    cout << "Bitset after modifications: " << bnum << endl; // Display the modified bitset
}
