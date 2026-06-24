#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter your string";
    cin>>str;
    bool visited[256]={false};
    for( char ch : str){
        if(visited[ch]){
        cout<<ch;
        visited[ch]=true;
    }
}
    return 0;
}