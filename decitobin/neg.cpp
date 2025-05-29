#include<iostream>
#include<vector>
using namespace std;
// We define a function to convert any negative number num to binary using bits size (usually 8 or 16).
void printTwosComplement(int num, int bits) {
    // Step 1: Convert absolute value to binary
    int absNum = abs(num);
    vector<int> binary(bits, 0);  //We make a vector binary of size bits (e.g., 8).
    int index = bits - 1; //index is used to insert bits from right to left (LSB to MSB).

    while (absNum > 0 && index >= 0) {//iteration1 -> 5>0 and index = 8-1 = 7>0
        binary[index] = absNum % 2; //binary[7] = 1 -> binary [6] = 0 -> binary[5] = 1
        absNum /= 2; //absnum -> 5/2 = 2 -> 2/2 = 1 -> 1/2 = 0
        index--; // index = 7-1=6 ->5 -> 4
    }//vector becomes [0,0,0,0,0,1,0,1]

    // Step 2: Take 1's complement (flip bits)
    for (int i = 0; i < bits; i++) {// i<8
        binary[i] = 1 - binary[i]; //binary[0] = 1-0 ..so on we got [1,1,1,1,1,0,1,0]
    }

    // Step 3: Add 1 (2's complement)
    int carry = 1; //to handle if we get any carry 
    for (int i = bits - 1; i >= 0; i--) { //i = 8-1=7, i>=0
        int sum = binary[i] + carry; // sum = 0+1=1 -> 1+0=1 -> 0+0=0 ->
        binary[i] = sum % 2; //1%2 = 1 -> 1%2 = 1 -> 0%0 = 0 [11111011]
        carry = sum / 2; //1/2=0 -> 1/2=0 -> 1/2=0
    }

    // Output the 2's complement
    cout << "2's complement (" << bits << "-bit) of " << num << " is: ";
    for (int i = 0; i < bits; i++) {
        cout << binary[i];
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a negative number: ";
    cin >> num;

    if (num >= 0) {
        cout << "Please enter a negative number!" << endl;
    } else {
        printTwosComplement(num, 8); // you can change 8 to 16 or 32 bits
    }

    return 0;
}
