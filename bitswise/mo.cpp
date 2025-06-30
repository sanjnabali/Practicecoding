#include<iostream>
using namespace std;
int main(){
    int email_verified = 1 << 0; // 0001 -> 0001
    int phone_verified = 1 << 1; // 0001 -> 0010
    int address_verified = 1 << 2; //0001 -> 0100
    int banned = 1<<3; // 0001 -> 1000

    int flag = 0;

    flag = flag | email_verified;   // 0000 | 0001 -> 0001
    flag = flag | phone_verified; // 0001 | 0010 -> 0011

    if(flag & email_verified){ //0011 & 0001 -> 0001
        cout << "email is verified" << endl;
    }

    if(flag & phone_verified){ //0011 & 0010 -> 0010
        cout << "phone is verified" << endl;
    }

    if(flag & address_verified){ //0011 & 0100 -> 0000
        cout << "address is verified" << endl;
    }
    else{
        cout << "address is not verified" << endl;
    }

    flag = flag & ~email_verified; // 0011 & 1110 -> 0010

    if(flag & email_verified){ //0010 & 0001 -> 0000
        cout << "email is verified" << endl;
    }
    else{
        cout << "email is not verified" << endl;
    }

    


}