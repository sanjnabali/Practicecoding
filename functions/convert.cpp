#include<iostream>
using namespace std;

char convert(char name){
    if(name >= 'a' && name <= 'z'){
        return name - 32; // Convert lowercase to uppercase    // a - 32 = 97 - 32 = 69 (A)
    } else if(name >= 'A' && name <= 'Z'){
        return name + 32; // Convert uppercase to lowercase  // A + 32 = 65 + 32 = 97 (a)
    } else {
        return name; // Return the character unchanged if it's not a letter

    }
}


int main(){
    char name;
    cout << "Enter a character: ";
    for(int i = 0; i < 5; i++) {
        cin >> name;
        cout<< convert(name) << " ";
        
    }
    return 0;
}