#include <iostream>
using namespace std;
int main(){
    int r, c;
    cout<<"Enter the row and coloum ";
    cin>>r>>c;
    int A[r][c], B[r][c];
    int Subtract[r][c];
    cout<<"Enter the first matrix A";
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin>>A[i][j];

             cout<<"Enter the first matrix A";

     for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin>>A[i][j];

            cout << "Subtract of matrix ";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            Subtract[i][j]= A[i][j] - B[i][j];
            cout<<Subtract[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}