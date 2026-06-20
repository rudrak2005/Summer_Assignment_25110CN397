#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter your lowercase character ";

    cin>> str;
    for(int i=0; i<str.length(); i++){
        if(str[i]>= 'a' && str[i]<='z'){str[i]=str[i]-32;
        }
    }
    cout<<str;
    return 0;
    
}