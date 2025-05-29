#include<iostream>
using namespace std;

class A
{
  int x;
public:
  A(){
    cout<<"default"<<endl;
  }
  A(int i) { x = i; }
  void print() { cout << x; }
};

class B: virtual public A
{
public:
  B():A(10) {  }
};

class C:  virtual public A 
{
public:
  C():A(10) {  }
};

class D: public B, public C {
public:
  D() : A(20), B(), C(){}
};

int main()
{
    D d;
    d.print();
    return 0;
}
