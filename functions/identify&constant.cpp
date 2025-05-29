#include <iostream>
#include <cctype>
#include <string>
using namespace std;

// Function to identify identifiers, constants, and operators
void identify(string str) {
    bool identifier = false, constant = false, operator_ = false;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        // Check if the character is alphabetic (part of an identifier)
        if (isalpha(ch)) {
            identifier = true;
        }

        // Check if the character is a digit or part of a constant
        if (isdigit(ch) || ch == '.') {
            constant = true;
        }

        // Check if the character is an operator
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^') {
            operator_ = true;
        }
    }

    // Output results based on flags
    if (identifier && constant && operator_) {
        cout << str << ": Contains an identifier, constant, and operator." << endl;
    } else if (identifier && constant) {
        cout << str << ": Contains an identifier and constant." << endl;
    } else if (identifier && operator_) {
        cout << str << ": Contains an identifier and operator." << endl;
    } else if (constant && operator_) {
        cout << str << ": Contains a constant and operator." << endl;
    } else if (identifier) {
        cout << str << ": Contains an identifier." << endl;
    } else if (constant) {
        cout << str << ": Contains a constant." << endl;
    } else if (operator_) {
        cout << str << ": Contains an operator." << endl;
    } else {
        cout << str << ": Does not match any category." << endl;
    }
}

int main() {
    string str;
    cout << "Enter a string or expression: ";
    getline(cin, str); // Use getline to capture the full input (including spaces)

    identify(str);

    return 0;
}
