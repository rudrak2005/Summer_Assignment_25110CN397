#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"enter your string";
    cin >> str;

    int freq[256] = {0};

    for(char ch : str)
        freq[ch]++;

    for(char ch : str)
    {
        if(freq[ch] == 1)
        {
            cout << "First Non-Repeating Character = " << ch;
            return 0;
        }
    }
    cout << "No Non-Repeating Character";
    return 0;
}