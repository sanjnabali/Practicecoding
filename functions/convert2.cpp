#include<iostream>
using namespace std;

char toconvert(char name){

    char ans = name - 'a' + 'A'; // Convert lowercase to uppercase
    return ans;

    // If you want to convert uppercase to lowercase, you can use:
    // char ans = name - 'A' + 'a'; // Convert uppercase to lowercase
}

int main(){
    char name;
    cin >> name;

    cout<<toconvert(name) << " ";
}