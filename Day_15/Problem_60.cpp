#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
        int index=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] !=0){
            arr[index++]= arr[i];
        }
    }
    for(int i=0; i<index; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}