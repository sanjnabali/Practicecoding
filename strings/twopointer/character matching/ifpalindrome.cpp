//check if given string is palindrome
#include<bits/stdc++.h>
using namespace std;


bool isPalindrome(const string& s) {
        const int n = s.size();
        int left = 0, right = n - 1;

        while (left < right) {
            // Move left to next alphanumeric
            while (left < right && !isalnum(s[left])) ++left;
            // Move right to previous alphanumeric
            while (left < right && !isalnum(s[right])) --right;

            // Compare after converting to lowercase (manual)
            char l = s[left] | 32;
            char r = s[right] | 32;

            if (isalpha(s[left]) && isalpha(s[right]) && l != r) return false;
            if (isdigit(s[left]) && isdigit(s[right]) && s[left] != s[right]) return false;
            if ((isalpha(s[left]) && isdigit(s[right])) || (isdigit(s[left]) && isalpha(s[right]))) return false;

            ++left;
            --right;
        }

        return true;
    }


int main(){

    string s;
    getline(cin, s);
    if(isPalindrome(s)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}