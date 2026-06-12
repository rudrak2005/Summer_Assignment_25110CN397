#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Duplicate elements in the array are: ";
    for (int i = 0; i < n; i++)
    {
        bool alreadyPrinted = false;
        for (int k = 0; k < i; k++)
        {
            if (arr[k] == arr[i])
            {
                alreadyPrinted = true;
                break;
            }
        }
        if (alreadyPrinted)
            continue;
        
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                break;
            }
        }
    }
        return 0;
    }