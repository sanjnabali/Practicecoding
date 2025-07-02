#include<iostream>
using namespace std;

int main(){

    int positive_num = 4;
    int neg_num = ~positive_num;
    unsigned int pos_num = neg_num;

    cout << "Positive number: " << positive_num << endl;
    cout << "Negative number: " << neg_num << endl;
    cout << "Unsigned representation of negative number: " << pos_num << endl;

    return 0;

}