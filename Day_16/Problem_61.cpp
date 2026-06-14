#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
       int arr[n-1];
        int sum = 0;
        for(int i = 0; i < n-1; i++){
            cin>>arr[i];
            sum += arr[i];
        }
        int total_sum = n*(n+1)/2;
        int missing_number = total_sum - sum;
        cout << "The missing number is: " << missing_number << endl;
                return
}