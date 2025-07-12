//We should always pass the reference of strings to avoid making copies of the original string which is quite inefficient.

#include<bits/stdc++.h>
using namespace std;

//using pass by value

int countspaceslow(string str, int idx){ //Takes the whole string as a copy (i.e., pass by value).
    if(idx == str.length()){
        return 0;
    }
    return countspaceslow(str, idx+1) + (str[idx] == ' ' ? 1 : 0);
    //If the current character is a space ' ', add 1, else 0.
}//Because each recursive call makes a copy of the string again and again. That’s heavy in terms of memory and speed.

//using  pass by reference
//Same logic, but the string is passed by reference (&).
//Because the function doesn’t copy the string — it works on the original string directly. No extra memory used, much faster.
int countspacefast(string& str, int idx){

    if(idx == str.length()){
        return 0;
    }
    return countspacefast(str, idx+1) + (str[idx] == ' ' ? 1 : 0);


}

int main(){
    string str = "Learn programming with me.";
    cout<<countspaceslow(str, 0)<<endl;
    cout<<countspacefast(str, 0)<<endl;

    return 0;
}


