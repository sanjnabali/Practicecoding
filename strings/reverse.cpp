// Reverse a String:

#include<iostream>
using namespace std;

int main(){
    string name = "hi, I am sanjna";
    string greet = "good morning";

    //manually reversing
    string rev;

    for(int i = name.length()-1; i>=0; i--){
        rev += name[i];

    }
    // str.rbegin() and str.rend() are reverse iterators.
    //new string using the range from reverse-begin to reverse-end.
    string rev1(greet.rbegin(), greet.rend());


    cout<<rev<<endl;
    cout<<rev1<<endl;

    return 0;
}