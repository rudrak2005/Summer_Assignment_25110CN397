#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int A[n][n];
  
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>A[i][j];
            int sum=0;
        for(int i=0; i<n; i++){
            sum +=A[i][j];
        }
        cout<<"Diagonal Sum = "<<sum;
        return 0;}