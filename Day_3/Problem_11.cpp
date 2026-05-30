#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b ;
    while(b !=0){
        c = a % b;
        a = b;
        b = c;
    }
    cout << "GCD is: " << a << endl;
    return 0;
}