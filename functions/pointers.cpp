#include<iostream>
using namespace std;

//pointers

// int main(){
//     int x = 5;
//     int* ptr = new int;  // Dynamically allocate memory
//     *ptr = 100;  // Assign a value
//     delete ptr;  // Deallocate memory when done

//     cout<<"Value of x: "<<x<<endl;
//     cout<<"Value of *ptr: "<<*ptr<<endl;
    

// // }
// int main()

// {
//     string food = "pizza";
//     string *ptr = &food;  //pointer variable that stores the address of the food
//     cout<<"Original food"<<food<<endl;
//     cout<<"Food through pointer: "<<*ptr<<endl;
//     food = "burger";
//     cout<<"Food after changing through pointer: "<<*ptr<<endl;
//     cout<<ptr<<endl;



int main(){
    int a = 5;
    int* ptr = &a;
    int** ptr2 = &ptr;
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl;
    cout<<**ptr2<<endl;
    cout<<&ptr2<<endl;
   

}