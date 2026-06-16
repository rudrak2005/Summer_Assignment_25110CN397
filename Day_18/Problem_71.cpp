#include <iostream>
using namespace std;
int main(){
    int n;
cout<<"Enter the number  ";
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
    int target;
    cout<<"Enter the number to found ";
    cin>>target;
    int low=0;
    int high =n-1;
    while (low <=high){
        int mid=(low+high )/2;
        if(arr[mid]==target){
            cout<<"found at index "<<mid;
            return 0;
        }
        else if(arr[mid]<target){low=mid+1;}
        else{high=mid-1;}
    }
}
cout<<"Not found ";
return 0;
}