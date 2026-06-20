#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cout<<"Enter your character ";
    cin>>str;
    int count=0;
    while(str[count] != '\0'){
        count ++;
    }
    cout<<"Length "<<count;
    return 0;
}