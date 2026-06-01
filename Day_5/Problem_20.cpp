#include <iostream>
using namespace std;
int ain(){
    long long n;
    cout<<"Enter a number: ";
    cin>>n;
long long largest =-1;
while(n%2==0){
    largest = 2;
    n /= 2;
}
for(long long i=3; i*i<=n; i+=2){
    while(n%i==0){
        largest = i;
        n /= i;
    }
}
if(n>2){
    largest = n;
}
cout<<"Largest prime factor of "<<n<<" is: "<<largest<<endl;
return 0;
}