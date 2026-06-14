#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout<<"unique elements are: ";
    for(int i=0;i<n;i++){
        bool isUnique=true;
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                isUnique=false;
                break;
            }
        }
        if(isUnique){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}