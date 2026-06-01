#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter a number: ";
    cin >> N;
    int a = 0, b = 1;
    int next;
    cout << a << " " << b << " ";
    if(N ==1){
        cout<<a<<" ";
        
    }
    else if(N==2){
cout<<b;

    }
    else{
        for (int i = 3; i <= N; i++)
        {
            next = a + b;
            cout << next << " ";
            a = b;
            b = next;
        }
        cout<<b;
    
    }
    return 0;

}