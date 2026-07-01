

#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    do {
        cout << "\n===== Menu-driven Calculator =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus (integers only)\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case 4:
                if (num2 == 0) {
                    cout << " Division by zero is not allowed.\n";
                } else {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                }
                break;
            case 5:
                if ((int)num2 == 0) {
                    cout << " number 2 by zero is not allowed.\n";
                } else {
                    cout << "Result: " << (int)num1 % (int)num2 << endl;
                }
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}
