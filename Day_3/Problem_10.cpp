#include <iostream>
#include<cmath>
using namespace std;

bool isPrime(int Num) {
    if (Num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(Num); i++) {
        if (Num % i == 0) {
            return false;
        }
    }
    return true;
}
int main (){
int start, end;
cout<<"Enter the starting number : ";
cin>>start;
cout<<"Enter the ending number : ";
cin>>end;
for (int i= start; i<=end; i++)
{
    if (isPrime(i)) {
        cout << i << " is a prime number." << endl;
    }
}
return 0;

}