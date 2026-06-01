#include <iostream> 
using namespace std;
int fact(int d){
    int f = 1;
    for(int i=1;i<=d;i++){
        f *= i;
    }
    return f;
}
int main(){
    int n , sum=0, org;
    cout<<"Enter a number: ";
    cin>>n;
    org = n;
    while(n>0){
        int digit = n%10;
        sum += fact(digit);
        n /= 10;
    }
    if(sum == org){
        cout<<org<<" is a strong number.";
    }
    else{
        cout<<org<<" is not a strong number.";
    }
    return 0;
}