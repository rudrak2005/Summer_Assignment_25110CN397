#include<iostream>
using namespace std;    
    int gcd(int a, int b){
        while(b !=0){
            int c = a % b;
            a = b;
            b = c;
        }
        return a;


    }
int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int g = gcd(a, b);
    int LCM = (a * b) / g;
    cout << "GCD is: " << g << endl;
    cout << "LCM is: " << LCM << endl;
    return 0;
}