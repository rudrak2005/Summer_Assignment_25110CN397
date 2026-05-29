#include <iostream>
using namespace std;
int main(){
    int Number;
    int Sum = 0;
    cout << "Enter a number: ";
    cin >> Number;  
    while(Number > 0){
        Sum += Number % 10;
        Number /= 10;
    }
    cout << "Sum of digits: " << Sum << endl;
    return 0;

}