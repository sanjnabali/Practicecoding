//Append a character/string at the end of the String:

#include<iostream>
#include<sstream>
using namespace std;

int main(){

    //way 1: using append
    string str = "I love programming.";
    str.append("It is fun.");

    //way 2 : manually
    str += "!";

    
    // Way 3: manually append characters of another string
    string word = "wow";
    for (int i = 0; i < word.length(); i++) {
        str += word[i];  // Append each character from 'word'
    }

    // Print the result after all appends
    cout << "After manual and append-based additions:\n";
    cout << str << "\n\n";

    //but if there are continusly so many appends of characters then osstringstrean
    //When you do repeated appending with +=, C++ may reallocate memory multiple times. That’s slow for large strings or loops.
    //To solve this, C++ provides std::ostringstream — a stream that efficiently builds strings.
    //Use ostringstream when:

    //Appending strings in a loop (like generating logs, output building, etc.)

    //Combining numbers and strings (no need for to_string)

    //Performance matters (faster than repeated +=)

    ostringstream oss;
    for(int i = 0; i<str.length(); i++){
        oss<<"the fun fact is " <<i<<"its super cool"<<endl;
    }
    
    cout << "Using ostringstream for efficient appending:\n";
    cout<<oss.str();

    return 0;



    

}