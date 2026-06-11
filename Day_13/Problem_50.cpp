#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    double average= (double)sum / n;
    cout << "Average of the array elements is: " << sum<<endl;
    cout << "Average of the array elements is: " << average;
    return 0;
}