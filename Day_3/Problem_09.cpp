#include <iostream>
#include<cmath>
using namespace std;
int main (){
int Num ;
cout<<"Enter a number : ";
cin>>Num;
bool isPrime = true;
if (Num <= 1) {
    isPrime = false;
} else {
    for (int i = 2; i <= sqrt(Num); i++) {
        if (Num % i == 0) {
            isPrime = false;
            break;
        }
    }

}
if (isPrime) {
    cout << Num << " is a prime number." << endl;
} else {
    cout << Num << " is not a prime number." << endl;
}
return 0;
}