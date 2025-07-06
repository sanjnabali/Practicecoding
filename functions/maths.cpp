#include<bits/stdc++.h>
using namespace std;


// Function to calculate the sum of two integers

int add(int a, int b){
    return a+b;
}

// Function to calculate the difference of two integers
int subtract(int a, int b){
    return a-b;
}

// Function to calculate the product of two integers
int multiply(int a, int b){
    return a*b;
}

// Function to calculate the quotient and remainder of two integers
// Throws an exception if division by zero is attempted
int divide(int a, int b){
    if(b == 0) {
        throw invalid_argument("Division by zero is not allowed.");
    }
    return a/b;
}

// Function to calculate the modulus of two integers
// Throws an exception if division by zero is attempted
int mode(int a, int b){
    if(b == 0) {
        throw invalid_argument("Division by zero is not allowed.");
    }
    return a%b;
}

// Function to calculate the power of a base raised to an exponent
// Throws an exception if the exponent is negative
int power(int base, int exp) {
    if (exp < 0) {
        throw invalid_argument("Negative exponent is not allowed.");
    }
    int result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

// Function to calculate the square root of a number
// Throws an exception if the number is negative
int squareRoot(int n) {
    if (n < 0) {
        throw invalid_argument("Square root of negative number is not allowed.");
    }
    return static_cast<int>(sqrt(n));
}

// Function to calculate the absolute value of an integer
int absolute(int n) {
    return (n < 0) ? -n : n;
}

// Function to calculate the factorial of a non-negative integer
// Throws an exception if the number is negative
int factorial(int n){
    if(n<0){
        throw invalid_argument("Factorial of negative number is not allowed.");

    }
    else if(n==0 || n==1){
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}

// Function to calculate the greatest common divisor (GCD) of two integers
int gcd(int a, int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

//function to check if a number is prime
bool isPrime(int n){
    if(n <=1){
        return false;
    }
    else if(n ==2){
        return true;
    }
    else if(n % 2 == 0){
        return false;
    }
    else{
        for(int i = 3; i <= sqrt(n); i += 2){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
}


// Function to calculate the least common multiple (LCM) of two integers
int lcm(int a, int b){
    if(a == 0 || b == 0) {
        throw invalid_argument("LCM of zero is not defined.");
    }
    return abs(a * b) / gcd(a, b);

}

// Function to calculate the sum of an array of integers
int sumArray(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return sum;
}

// Function to calculate the average of an array of integers
double averageArray(const vector<int>& arr) {
    if (arr.empty()) {
        throw invalid_argument("Cannot calculate average of an empty array.");
    }
    return static_cast<double>(sumArray(arr)) / arr.size();
}

//function to check if a number is even or odd

bool isEven(int n) {
    return n % 2 == 0;
}

// Function to check if a number is odd
bool isOdd(int n) {
    return n % 2 != 0;
}

//function to compute combinations of n and r
int combination(int n, int r) {
    if (r < 0 || r > n) {
        throw invalid_argument("Invalid values for n and r.");
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to compute permutations of n and r
int permutation(int n, int r) {
    if (r < 0 || r > n) {
        throw invalid_argument("Invalid values for n and r.");
    }
    return factorial(n) / factorial(n - r);
}

// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 0) {
        throw invalid_argument("Invalid value for n.");
    }
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}


// Function to calculate the sum of digits of an integer
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Function to check if a number is a palindrome
bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int main(){

    int choice;
    cout << "Choose a mathematical operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n"; 
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus of integer\n";     
    cout << "6. Power of number\n";
    cout << "7. Square Root\n";
    cout << "8. Absolute Value\n";
    cout << "9. Factorial\n";   
    cout << "10. GCD\n";
    cout << "11. LCM\n";
    cout << "12. Sum of Array\n";   
    cout << "13. Average of Array\n";
    cout << "14. Check Prime\n";
    cout << "15. Check Even or Odd\n";  
    cout << "16. CalculateCombinations\n";
    cout << "17. Calculate Permutations\n";   
    cout << "18. calculate Fibonacci\n";
    cout << "19. Sum of Digits\n";
    cout << "20. Check Palindrome\n";
    cout<<"21. Exit \n";
    

    int a, b, n, r;
    vector<int> arr;
    while(choice != 21) {
    cout << "Enter your choice (1-20): ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Sum: " << add(a, b) << endl;
            break;
    }
    switch (choice) {

        case 2:
        cout << "Enter two integers: ";
        cin >> a >> b;
        cout <<"Difference: "<< subtract(a, b) << endl;
        break;  
    }
    switch (choice) {
        case 3:
        cout<< "Enter two integers: ";
        cin >> a >> b;
        cout << "Product: " << multiply(a, b) << endl;
        break;
    }
    switch (choice){
        case 4:
        cout<<"enter two integers:";
        cin >> a >> b;
        try {
            cout << "Quotient: " << divide(a, b) << endl;
        } catch (const invalid_argument& e) {
            cout << "Error: " << e.what() << endl;
        }
        break;
    }
    switch(choice){
        case 5:
        cout << "Enter two integers: ";
        cin >> a >> b;
        try {
            cout << "Modulus: " << mode(a, b) << endl;
        } catch (const invalid_argument& e) {
            cout << "Error: " << e.what() << endl;
        }
        break;
    }
    switch(choice){
        case 6:
        cout<<"Enter base and exponent:";
        cin>>a >> b;
        try{
            cout << "Power: " << power(a, b) << endl;
        } catch (const invalid_argument& e) {
            cout << "Error: " << e.what() << endl;
        }
        break;
    }
    switch(choice){
        case 7:
        cout<<"Enter a number:";
        cin>>a;
        try{
            cout<<"Square Root:"<< squareRoot(a) << endl;

        }
        catch (const invalid_argument& e) {
            cout << "Error: " << e.what() << endl;
        }

        break;
    }
    switch(choice){
        case 8:
        cout<<"Enter a number:";
        cin>>a;
        cout<<"Absolute Value:"<< absolute(a) << endl;
        break;

    }
    switch(choice){
        case 9: 
        cout<<"Enter a non-negative integer:";
        cin>>a;
        try{
            cout<<"Factorial:"<< factorial(a) << endl;
        }
        catch (const invalid_argument& e) {
            cout << "Error: " << e.what() << endl;
        }
        break;
    }
    switch(choice){
        case 10:
        cout<<"Enter two integers:";
        cin>>a>>b;
        cout<<"GCD:"<<gcd(a,b)<<endl;
        break;

    }

    switch(choice){
        case 11:
        cout<<"Enter two integers:";
        cin>>a>>b;
        try{
            cout<<"LCM:"<<lcm(a,b)<<endl;
        }
        catch (const invalid_argument& e) {
            cout << "Error: " << e.what() << endl;
        }
        break;

    }
    switch(choice){
        case 12:
        vector<int> arr;
        int size;
        arr.push_back(0);
        cout<<"Enter the size of the array:";
        cin>>size;
        arr.resize(size);
        cout<<"Enter the elements of the array:";
        for(int i=0; i<size; i++){
            cin>>arr[i];
        }       
        cout<<"Sum of Array:"<<sumArray(arr)<<endl;
        break;

    }

    switch(choice){
        case 13:
        vector<int> arr1;
        int size1;
        arr1.push_back(0);
        cout<<"Enter the size of the array:";
        cin>>size1;
        arr1.resize(size1);
        cout<<"Enter the elements of the array:";
        for(int i=0; i<size1; i++){
            cin>>arr1[i];
        }       
        cout<<"Average of Array:"<<averageArray(arr1)<<endl;
        break;


    }

    switch(choice){
        case 14:
        cout<<"Enter a number:";
        cin>>a;
        if(isPrime(a)){
            cout<<a<<" is a prime number."<<endl;
        }
        else{
            cout<<a<<" is not a prime number."<<endl;
        }
        break;

    }

    switch(choice){
        case 15:
        cout<<"Enter a number:";
        cin>>a;
        if(isEven(a)){
            cout<<a<<" is an even number."<<endl;
        }
        else{
            cout<<a<<" is an odd number."<<endl;
        }
        break;

    }

    switch(choice){
        case 16:
        cout<<"Enter values for n and r:";
        cin>>n>>r;
        try {
            cout << "Combinations (C(n, r)): " << combination(n, r) << endl;
        } catch (const invalid_argument& e) {
            cout << "Error: " << e.what() << endl;
        }
        break;

    }

    switch(choice){
        case 17:
        cout<<"Enter values for n and r:";
        cin>>n>>r;
        try {
            cout << "Permutations (P(n, r)): " << permutation(n, r) << endl;
        } catch (const invalid_argument& e) {
            cout << "Error: " << e.what() << endl;
        }
        break;

    }

    switch(choice){
        case 18:
        cout<<"Enter a positive integer:";
        cin>>n;
        try {
            cout << "Fibonacci(" << n << "): " << fibonacci(n) << endl;
        } catch (const invalid_argument& e) {
            cout << "Error: " << e.what() << endl;
        }
        break;

    }

    switch(choice){
        case 19:
        cout<<"Enter a number:";
        cin>>a;
        cout<<"Sum of Digits:"<<sumOfDigits(a)<<endl;
        break;

    }

    switch(choice){
        case 20:
        cout<<"Enter a number:";
        cin>>a;
        if(isPalindrome(a)){
            cout<<a<<" is a palindrome."<<endl;
        }
        else{
            cout<<a<<" is not a palindrome."<<endl;
        }
        break;

    }
}
    if (choice == 21) {
        cout << "Exiting the program." << endl;
    } else {
        cout << "Invalid choice. Please try again." << endl;
    }
    return 0;
}
