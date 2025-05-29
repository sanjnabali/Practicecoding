#include<iostream>
using namespace std;
//function to find the count of vowels in a paragraph

int count_vowels(string str){
    int count = 0;
    
    for(int i =0; i<str.length(); i++){
        char c = str[i];
        if(c=='a'|| c=='e'|| c=='i' || c == 'o'|| c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
           count++;
        }
        
    }
    return count;
}

int count_words(string str){
    int countwords = 0;
    for(int i = 0; i<str.length(); i++){
        if(str[i] ==' '){
            countwords++;
        }
    }
    return countwords;
}

int count_lines(string str){
    int countlines = 0;
    for(int i = 0; i<str.length(); i++){
        if(str[i] == '\n'){
            countlines++;
        }
    }
    return countlines;
}
int main(){
    string line, paragraph;
    cout << "Enter a paragraph (type an empty line to finish):" << endl;

    // Read multiple lines until an empty line is entered
    while (true) {
        getline(cin, line);
        if (line.empty()) {
            break;  // Stop reading when an empty line is encountered
        }
        paragraph += line + '\n';  // Append the line to the paragraph with a newline
    }

    // Remove the last newline for cleaner output (optional)
    if (!paragraph.empty() && paragraph.back() == '\n') {
        paragraph.pop_back();
    }

    cout << "The count of vowels in the paragraph is: " << count_vowels(paragraph) << endl;
    cout << "The count of words in the paragraph is: " << count_words(paragraph) + 1 << endl;
    cout << "The count of lines in the paragraph is: " << count_lines(paragraph) + 1 << endl;

    return 0;
   
}