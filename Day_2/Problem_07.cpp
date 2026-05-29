#include <iostream>
using namespace std;
    int main(){
        int Number;
        int Product = 1;
        cout << "Enter a number: ";
        cin >> Number;
        while(Number > 0){
            Product *= Number % 10;
            Number /= 10;
        }
        cout << "Product of digits: " << Product << endl;
        return 0;

    }