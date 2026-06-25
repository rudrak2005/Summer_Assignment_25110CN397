#include <iostream>
#include <sstream>
#include <<vecrream>
using namespace std;

int main(){
    string sentence ;
    getline(cin, sentence);
    stringstream ss(sentence)

    vector<string> words;
    string word;

    while(ss>> word)
    words.push_back(word );
    for(int i=0; i<words.size()-1; i++){
    for(int j=i+1; j<words. j<words.size(); j++)
        {
            if(words[i].lenght()>words[j].length())
            swap(words[i].words[j]);

           }   }

for(string w:words)
  cout<<w<<endl;
  return 0;
}