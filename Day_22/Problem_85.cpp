#include<iostream>
#include<string>
using namespace std ;
int main(){
    string str;
    cin>>str;
    int left=0;
    int right srt.length()-1;
    bool palindrome =true;
    while (left <right)
    {
        if(str[left] != str[right]){
            palindrome =false;
            break;
        }
        left ++;
        right--;
    }
    if(palindrome){
        cout<<"palindrome";
    }
    else{
        cout <<"Not Palindrome";
    }
    return 0;
    
}