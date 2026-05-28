#include <iostream>
using namespace std;
int main(){
    int Num, Fact= 1;
    cout << "Enter a number: ";
    cin>>Num;
    for(int i=1 ; i<=Num; i++)
{
    Fact *= i;

}
cout << "The factorial number is  " << Num << " is: " << Fact << endl;
return 0;
}