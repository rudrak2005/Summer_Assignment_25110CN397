#include <iostream>
using namespace std;
int findSum(int a, int b){
    return a+b;
}
int main()
{
    int a, b;
    cout<<"Enter two numbers : ";
    cin  >> a >>b ;
    cout<<"sum= "<<findSum(a, b);
    return 0;
}