#include<iostream>
using namespace std;

//pass by value doesn't change the original value of the variable
//it creates a copy of the variable and passes it to the function

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap function: a = " << a << ", b = " << b << endl;

}

int main(){

    int x = 10,  y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap: x = " << x << ", y = " << y
            << endl;

    return 0;


}