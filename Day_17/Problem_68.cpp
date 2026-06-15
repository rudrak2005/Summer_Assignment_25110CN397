#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number n and m";
    cin>>n>>m;
    int arr1[n], arr2[m];
    cout<<"Enter the elements of first array";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the elements of second array";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    cout<<"The common elements in both the arrays are: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
    return 0;
    
}