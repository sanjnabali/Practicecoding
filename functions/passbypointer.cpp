#include<iostream>
using namespace std;

//pass by pointer allows the function to modify the value stored at the passed address.
//when you pass an arguement by pointer to function, you are passing the address of the variable rather than the copy of the variable,

//so the function can modify the original variable.

void swap(int *a, int *b){
    int temp = *a;  // dereference the pointer to get the value at the address
    // swap the values at the addresses pointed to by a and b
    *a = *b;
    *b = temp;
}

int main(){
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swap(&x, &y);  // pass the address of x and y
    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}