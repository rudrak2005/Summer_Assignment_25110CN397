#include <iostream>
using namespace std;
int main(){
    int x , n, result=1;
    cout<<"Enter a number: ";   
    cin>>x>>n;
    for(int i=0; i<n; i++){
        result*=x;
    }
    cout<<x<<"Result: "<<result<<endl;
    return 0;
}