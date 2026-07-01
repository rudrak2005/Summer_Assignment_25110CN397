

#include <iostream>
using namespace std;

const int MAX = 100;
int arr[MAX];
int n = 0;

void inputArray() {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
}

void displayArray() {
    if (n == 0) { cout << "Array is empty.\n"; return; }
    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

void findMaxMin() {
    if (n == 0) { cout << "Array is empty.\n"; return; }
    int maxVal = arr[0], minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }
    cout << "Max: " << maxVal << " | Min: " << minVal << endl;
}

void sumAverage() {
    if (n == 0) { cout << "Array is empty.\n"; return; }
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    cout << "Sum: " << sum << " | Average: " << (double)sum / n << endl;
}

void bubbleSort() {
    if (n == 0) { cout << "Array is empty.\n"; return; }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Array sorted successfully.\n";
    displayArray();
}

void searchElement() {
    if (n == 0) { cout << "Array is empty.\n"; return; }
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i << " (position " << i + 1 << ")\n";
            return;
        }
    }
    cout << "Element not found.\n";
}

void reverseArray() {
    if (n == 0) { cout << "Array is empty.\n"; return; }
    int start = 0, end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "Array reversed successfully.\n";
    displayArray();
}

int main() {
    int choice;
    do {
        cout << "\n===== Menu-driven Array Operations =====\n";
        cout << "1. Input Array\n";
        cout << "2. Display Array\n";
        cout << "3. Find Max and Min\n";
        cout << "4. Sum and Average\n";
        cout << "5. Sort Array (Bubble Sort)\n";
        cout << "6. Search Element\n";
        cout << "7. Reverse Array\n";
        cout << "8. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: inputArray(); break;
            case 2: displayArray(); break;
            case 3: findMaxMin(); break;
            case 4: sumAverage(); break;
            case 5: bubbleSort(); break;
            case 6: searchElement(); break;
            case 7: reverseArray(); break;
            case 8: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 8);

    return 0;
}
