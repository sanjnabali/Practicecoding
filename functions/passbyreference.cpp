#include<iostream>
using namespace std;

// pass by reference changes the original value of the variable
// it passes the address of the variable to the function

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 10; 
    int y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swap(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}