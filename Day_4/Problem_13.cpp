#include <iostream>
using namespace std;
int main(){
    int Number;
    cout<<"Enter a number: ";
    cin>>Number;
    int a = 0 , b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<Number;i++){
        int next = a + b;
        cout<<next<<" ";
        a = b;
        b = next;
    }
    return 0;   
    
}