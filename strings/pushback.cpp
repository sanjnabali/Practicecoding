// We should always use push_back() function instead of + operator, 
//to add a character at the end of the string. 
//This is because the time complexity of + operator depends on the length of the string O(N) 
//whereas push_back() simply pushes the character at the end in O(1) time complexity. 
//So, if we need to append characters in a loop, push_back() will have much better performance as compared to + operator.

#include<bits/stdc++.h>
using namespace std;

//slower because of + operator

string filterlowercaseslow(string str){
    string ans = "";
    for(int i = 0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            ans += str[i];
        

        }
    }
    return ans;

}

string filterlowercasefast(string& s){
    string res = "";
    for(int i = 0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            res.push_back(s[i]);

        }
    }
    return res;

}

int main(){
    string str = "Hello, I am Sanjna";
    cout<<filterlowercaseslow(str)<<endl;
    cout<<filterlowercasefast(str)<<endl;

    return 0;

}