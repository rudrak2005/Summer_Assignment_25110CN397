#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
       cin >> arr[i];
       int key;
         cout << "Enter the key: ";
            cin >> key;
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            cout << "Key found at index: " << i << endl;
            return 0;
        }



    
}
cout<< "Key not found in the array." << endl;
return 0;
}