#include<iostream>
using namespace std;
int main(){
    int number ;
    cin>>number ;
    int binary[32], i=0;
    while(number>0){
        binary[i++]= number%2;
        number/=2;

    }
    cou<<"binary ";
    for(int j=i-1; j>=0; j--)
    {
        cout<<binary[j];

    }
    return 0;
}