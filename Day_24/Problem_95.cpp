#include <iostream>
#include <string>
#include<sstream>
using namespace std;

int main(){
    string sentence;
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;
    string longest = "";

    while(ss>>word){
        if(word.length()>longest.length())
        longest =word;
    }
    cout<<"Longest word = "<<longest;
    return 0;
}