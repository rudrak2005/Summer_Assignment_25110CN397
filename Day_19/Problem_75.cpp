#include <iostream>
using namespace std;
int main(){
    int r, c;
    cout<<"Enter the row and coloum ";
    cin>>r>>c;
    int A[r][c];
  
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin>>A[i][j];
    cout <<"Transpose matrix : \n";
        
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            cout <<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}