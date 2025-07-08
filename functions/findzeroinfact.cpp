#include <iostream>
using namespace std;

int countTrailingZeros(int n) {
    int count = 0; //count initializes to 0 at start , 
    for(int i = 5; n / i >= 1; i *= 5){ // i = 5 , 5/5 = 1, 5/25 = 0
        // This loop counts the number of multiples of 5, 25, 125,  // etc. that contribute to the trailing zeros in n!.
        // For example, for n = 5, it counts how many times 5 is a factor in the numbers from 1 to n.
        // For n = 5, it will count 1 (5 itself) and stop when i becomes 25 because 5/25 < 1.
        // For n = 10, it will count 2 (5 and 10)
        int div = n / i;
        cout << "Checking factor: " << i << " → " << n << " / " << i << " = " << div << " (contributes " << div << " fives)" << endl;
        count += div;
    }// i = i*5 = 5*5 = 25
    cout << "Total number of 5s in prime factors of " << n << "! = " << count << endl;
    return count;
 // This returns the total count of trailing zeros in n!.
    // For example, for n = 5, it returns 1 because 5! // = 120, which has one trailing zero 
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num; //num = 5
    int result = countTrailingZeros(num);
    cout << "Number of trailing zeros in " << num << "! is: ";
    cout << result << endl; //passing 5 to countTrailingZeros function

    return 0;
}

// This program calculates the number of trailing zeros in the factorial of a given number.
// It does this by counting the number of times 5 is a factor in the numbers from 1 to n.
// The function `countTrailingZeros` iterates through multiples of 5 and sums up the counts of how many times each multiple divides into `n`.
// The main function prompts the user for input and displays the result.
// The output will be the number of trailing zeros in the factorial of the input number.
// For example, if the user inputs 5, the output will be "Number of trailing zeros in 5! is: 1" because 5! = 120, which has one trailing zero. If the user inputs 10, the output will be "Number of trailing zeros in 10! is: 2" because 10! = 3628800, which has two trailing zeros.
// the program uses a loop to count the number of trailing zeros efficiently without calculating the factorial directly, which is important for larger numbers where factorials grow very large very quickly.
// The program is efficient and works well for large inputs, as it only requires logarithmic time complexity relative to the input number due to the division by powers of 5.
// The program is simple and straightforward, making it easy to understand and modify if needed.
