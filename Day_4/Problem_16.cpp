#include <iostream>
using namespace std;
bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    return sum == originalNum;
}
int main() {
    int start , end;
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            cout << i << " is an Armstrong number." << endl;
        }
    }
   
    return 0;
}