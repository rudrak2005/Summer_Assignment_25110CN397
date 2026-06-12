#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
       cin >> arr[i];
       int Largest = INT_MIN;
       int SecLargest = INT_MIN;
         for(int i=0; i<n; i++){
          if(arr[i]>Largest){
                SecLargest = Largest;
                Largest = arr[i];
          }
          else if(arr[i]>SecLargest && arr[i]!=Largest){
                SecLargest = arr[i];
          }
         }
         cout << "Largest element is: " << Largest << endl;
         cout << "Second Largest element is: " << SecLargest << endl;
    return 0;
}