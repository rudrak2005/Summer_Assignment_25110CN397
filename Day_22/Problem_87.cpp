#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout <<"Enter your string ";
    for (int i=0; i<str.length(); i++){
        bool counted =false;
        for(int k=0; k<i; k++){
            if(str[i]==str[k]){
                counted=true;
                break;
            }
        }
        if(counted)
            continue;
        int count = 0;
        for(int j=0; j<str.length(); j++){
        if(str[i]==str[j]){count++}
        cout<<str[i]<<"="<<count<<endl;
        }
    }
return 0;
}