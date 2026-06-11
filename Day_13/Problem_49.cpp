#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    cout<<"array elements are: ";
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}