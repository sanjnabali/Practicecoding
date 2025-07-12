#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);    //You are telling the system:
//“I’ll use only C++ I/O (cin/cout), I don’t need the safety sync, and I don’t want to waste time flushing output every time I read input.”
    cin.tie(NULL);  //It unties cin from cout. By default, every time you use cin, it flushes cout first — which slows things down unnecessarily. Faster input performance.

    string word, sentence;
    // Input a single word
    cout<<"enter a word: ";
    cin>>word;
    cout<<endl;
    //input a line (multiple words)


    //When you use cin >> (for single word/number input) before using getline(cin, ...) (for full-line input), 
    //the leftover newline character (\n) in the input buffer confuses getline() — it reads only an empty line instead of waiting for user input.
    cin.ignore(); //This discards the leftover newline (\n) or any characters still pending in the input buffer, so getline() starts fresh.
    cout<<"Enter a sentence: ";
    getline(cin, sentence);
    cout<<"\n";

    cout<<"word:" <<word<<endl;
    cout<<"sentence: "<<sentence<<endl;

    return 0;
}



