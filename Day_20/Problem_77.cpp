#include <iostream> 
using namespace std;
int main(){
    int r1 ,r2, c1, c2;
    cout<<"Enter first Row and Coloum ";

    cin>>r1>>c1;
    cout<<"Enter the Second Row and Coloum ";
    cin>>r2>>c2;
    if(c1 !=r2){cout<<"Multiplication Not possible "; return 0;}
    int A[r1][c1], B[r2][c2];
    int M[r1][c2];
    for(int i=0; i<r1; i++)
        for(int j=0;j<c1; j++){
            cin>>A[i][j];
        }
    
         for(int i=0; i<r2; i++)
        for(int j=0;j<c2; j++){
            cin>>B[i][j];
        }
       for(int i=0; i<r1; i++)
        for(int j=0;j<c2; j++){
            M[i][j]=0;
        

        for(int k=0; k<c1; k++){
            M[i][j] += A[i][k] * B[k][j];
        }}

         for(int i=0; i<r1; i++)
        for(int j=0;j<c1; j++){
            cout<<M[i][j]<<" ";
    
        cout<<endl;
        }
        return 0;


}