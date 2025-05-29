#include<iostream>
using namespace std;

bool isPowerOfTwo(int n) {
        if(n<=0){return 0;}

        return (n&(n-1)) == 0;
    }

int main(){
    isPowerOfTwo(16);
    
}
