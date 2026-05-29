#include<iostream>
using namespace std;    
int main(){
    int Number;
    int Reverse = 0;
    cout << "Enter a number: "; 
    cin >> Number;
    while(Number > 0){
        Reverse = Reverse * 10 + Number % 10;
        Number /= 10;
    }
    cout << "Reverse of the number: " << Reverse << endl;
    return 0;

}