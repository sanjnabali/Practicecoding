// Find the First and Last Occurrence of a Character in the String:
//powerful foundation for problems like pattern matching, search algorithms, and parsing logs or files.

#include<iostream>
using namespace std;

int main(){
    string str = "learn programming with me";

    size_t first = str.find('m'); //finds first occurrence of 'm' (case-sensitive).
    size_t last = str.find_last_of('m'); // find last occurrence of 'm'
    //size_t is used because the position index is non-negative
    //.find() returns string::npos (a large value like -1 for unsigned) if the character is not found.


    if(first != string::npos){
        cout<<"the first occurrence of m is at index: "<<first<<endl;
    }

    if(last != string::npos){
        cout<<"the last occurrence of m is at index: "<<last<<endl;
    }
    
    
    return 0;


}