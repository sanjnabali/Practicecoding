#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned int num = 5;

    bitset<32> bnum(num); // Initialize bitset with the number 5 (00000101 in binary)
    cout<<"original bitset:"<<bnum<<endl;

    unsigned int result = num >> 1;
    // Right shift the bitset by 1 position
    bitset<16> b2num(result);
    cout<<"bitset after right shift:"<<b2num<<endl;


    unsigned int result2 = num << 1;
    // Left shift the bitset by 1 position
    bitset<16> b3num(result2);
    cout<<"bitset after left shift:"<<b3num<<endl;
    return 0;
}