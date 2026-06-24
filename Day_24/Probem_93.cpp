#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1, str2;
    cout<<"Enter the string one and two";
    cin>>str1>>str2;

    if(str1.length() != str2.length()){
        cout<<"not rotataion";
    return 0;
    }
    string temp= str1   + str2;
    if(temp.find(str2) !=string::npos){cout<<"rotation";}
    else   
    { cout<<"not rotation";
    }
    return 0;

}