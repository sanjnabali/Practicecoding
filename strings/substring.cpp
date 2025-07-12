#include<bits/stdc++.h>
#include<sstream>
using namespace std;

int main(){

    
    string str = "this is sanjna";

    cout<<"substring from index from 5 to 10 using substr:" <<endl;
    cout<<str.substr(5,10)<<endl; // use substr to get the substring part

    //manually
    string sub = "";
    cout<<"extracting substring manually using for loop \n";

    for(int i = 3; i<7; i++ ){
        sub += str[i];

    } cout<<sub<<endl;

    //using iterators

    cout<<"using iterators like begin() \n";

    string subb(str.begin()+3, str.begin()+7);
    cout<<subb<<endl;

    //using STL
    cout<<"using stl algorithms like copy \n";

    string s = "algorithms";
    string ss;

    copy(s.begin()+2, s.begin()+4, back_inserter(ss));
    cout<<ss<<endl;
    

    //using sstream
    cout<<"using string stream: \n";

    string input = "I love programming";
    stringstream ss1(input);
    string word;
    while(ss1>>word){
        cout<<word<<endl;
    }



    return 0;
}