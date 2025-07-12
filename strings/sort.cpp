#include<bits/stdc++.h>
using namespace std;

int main(){
    //using sort function
    string str = "I love programming";
    sort(str.begin(), str.end());
    cout<<str<<endl;

    string another = "hello how are you";

    //manually sorting bubble sort

    for(int i = 0; i<another.length(); i++){
        if(another[i] > another[i+1]){
            char temp = another[i];
            another[i] = another[i+1];
            another[i+1] = temp;


        }

    }

    cout<<another<<endl;
    return 0;

}