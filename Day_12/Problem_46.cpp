#include <iostream>
using namespace std;
bool IsArmStrongN(int n)
{
    int Org = n;
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum+=digit*digit*digit;
        n/=10;
    }
    return sum==Org;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(IsArmStrongN(n))
        cout<<"Armstrong";
    else
        cout<<"Not Armstrong ";
        return 0;    
}