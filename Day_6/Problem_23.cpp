#include <iostream>
#include<cmath>
using namespace std;
int  main (){
    int n, count=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0){
        if(n%2==1){
            count++;
        }
        n/=2;
    }
    cout<<"Number of 1s in binary representation: "<<count<<endl;
    return 0;
}