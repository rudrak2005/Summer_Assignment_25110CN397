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

    int maxFreq = 0;
    char result;

    for(char ch : str)
    {
        if(freq[ch] > maxFreq)
        {
            maxFreq = freq[ch];
            result = ch;
        }
    }
    cout << "Maximum Occurring Character = " << result;
    return 0;
}