#include<iostream>
using namespace std;
int main(){
    int n, sum=0 , org;
    cout<<"Enter a number: ";
    cin>>n;
    org = n;
    while(n>0){
        int digit = n%10;
        sum += digit*digit*digit;
        n /= 10;
    }
    if(sum == org){
        cout<<org<<" is an armstrong number.";
    }
    else{
        cout<<org<<" is not an armstrong number.";
    }
    return 0;
}