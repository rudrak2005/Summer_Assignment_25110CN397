#include <iostream>
using namespace std;    

int main(){
    int Num ,rev=0, org;
    cout << "Enter a number: ";
    cin >> Num;
    org = Num;
    while(Num > 0){
        int digit = Num % 10;
        rev = rev * 10 + digit;
        Num /= 10;
    }
if(rev ==org){
    cout << org << " is a palindrome number." << endl;
}
else{
    cout << org << " is not a palindrome number." << endl;
    
}
    return 0;

}