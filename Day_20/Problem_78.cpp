#include <iostream>
using namespace std;
int main (){
int n;
cout<<"Enter the number ";
cin>>n;

int A[n][n];
for(int i=0; i<n; i++)
    for(int j=0; j<n ;j++){
        cin>>A[i][j];
    }
    bool symmetric = true ;
    
    for(int i=0; i<n; i++){
        for(int j=0 ;j<n ; j++){
        if(A[i][j] != A[j][i]){
            symmetric= false;
            break;
        }
        }
    }
if(symmetric)
        cout<<"Symmetric Matrix ";

        else{
            cout<<"Not Symmetric Matrix";
        }
        return 0;

}