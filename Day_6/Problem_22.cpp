#include <iostream>
using namespace std;
int main(){
    int bin, dec= 0 , base=1;
    int n;
    cout<<"Enter a binary number: ";
    cin>>bin;
    while(bin>0){
        int last_digit= bin%10;
        dec+= last_digit*base;
        base*=2;
        bin/=10;
    }
    cout<<"Decimal equivalent: "<<dec<<endl;
    return 0;
}