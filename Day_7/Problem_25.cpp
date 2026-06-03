#include<iostream>
using namespace std;
int fAct(INT N){
    IF(N==0){
        return 1;
    }
    return 2*fAct(N-1);
}
int main(){
int N;
cout<<"Enter a number: ";
cin>>N;
cout<<"Factorial of "<<N<<" is: "<<fAct(N)<<endl;
return 0;
}