#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s1, s2;
  cout<<"enter your first and second string element";
    cin >> s1 >> s2;

    if(s1.length() != s2.length())
    {
        cout << "Not Anagram";
        return 0;
    }

    int freq[256] = {0};

    for(char ch : s1)
        freq[ch]++;

    for(char ch : s2)
        freq[ch]--;

    for(int i=0;i<256;i++)
    {
        if(freq[i] != 0)
        {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";

    return 0;
}