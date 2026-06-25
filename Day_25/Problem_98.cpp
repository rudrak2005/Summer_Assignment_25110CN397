#include<iostream>
using namespace std;

int main(){
    string s1, s2;
    cout<<"enter the two string ";
    bool    printed[256]={false};
    for(char ch:s1){
        for(char c:s2){
            if(ch==c && !printed[ch]){
                cout<<ch<<" ";
                printed[ch]=true;
            }
        }
    }
    return 0;
}