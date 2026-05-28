#include<iostream>
using namespace std;
int main(){
    int Number , Count= 0 ;
    cout << "Enter a number: ";
    cin >> Number;
    while(Number != 0)
    {
        Number /= 10;
        Count++;
    }
    cout << "The digits  number is: " << Count << endl;
    return 0;
}