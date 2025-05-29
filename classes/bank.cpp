#include <iostream>
#include<string.h>
using namespace std;

double newbalance = 0;
class bank{
private:
    double balance;

public:
    int accountid;
    string name;

    bank(int id, string n, double b){
        accountid = id;
        name = n;
        this->balance = b;
        newbalance = balance;

    }
    
    void setterbalance(){
        double addamount;
        cout<<"Enter new balance: ";
        cin>>addamount;
        if(addamount != 0 && addamount > 0){ 
            balance = balance + addamount;
        }
        else{
            cout<<"Invalid input"<<endl;
        }
    
}
    void getterbalance(){
        newbalance = balance;
        cout<<"Current balance: "<<newbalance<<endl;
    }

    void display(){
        cout<<"Account ID: "<<accountid<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
    }

};



int main(){

    bank b(1, "sanjna", 5000);
    b.display();
    b.setterbalance();
    b.getterbalance();
    return 0;
    


}