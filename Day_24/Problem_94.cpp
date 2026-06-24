#include<iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"enter the string ";
    cin>>str;

    int count = 1;
    
    for(int i=0; i<str.length(); i++){
        while(i+1<str.length()&& str[i]==str[i+1]){
            count++;
            i++;
        }
        cout<<str[i]<<count;
        count=1;
    }
    return 0;
}

