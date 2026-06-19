#include <iostream>
using namespace std;
int main(){
    int r, c;
    cout<<"enter the row and column ";
    cin>>r>>c;
    int A[r][c];
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin>>A[i][j];

    for(int j=0; j<r; j++){
        int sum=0;
        for(int i=0; i<c; i++){
            sum += A[i][j];
        }
        cout<<"column"<<j+1<<"Sum = " <<sum <<endl;
    }
    return 0;
}