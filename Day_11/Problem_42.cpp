#include <iostream>
using namespace std;
int maximun(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int max = maximun(num1, num2);
    cout << "The maximum is: " << max << endl;
    return 0;
}