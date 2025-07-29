#include<bits/stdc++.h>
using namespace std;



void reverseString(vector<char>& s) {
        if (s.empty()) return; 
        int start = 0;
        int end = s.size()-1;

        while(start < end){
            int temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
    }

int main(){
    vector<char> s = {'h','e','l','l','o'};
    reverseString(s);
    for(int i=0;i<s.size();i++){
        cout<<"["<<s[i]<<"]";
    }



    return 0;
}