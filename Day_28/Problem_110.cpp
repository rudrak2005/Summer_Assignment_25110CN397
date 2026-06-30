
#include <iostream>
using namespace std;

struct Account {
    int accNo;
    string name;
    double balance;
};

Account accounts[100];
int accCount = 0;

void createAccount() {
    Account a;
    a.accNo = 1001 + accCount;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, a.name);
    cout << "Enter Initial Deposit: ";
    cin >> a.balance;

    accounts[accCount] = a;
    accCount++;
    cout << "Account created! Account No: " << a.accNo << endl;
}

int findAccount(int accNo) {
    for (int i = 0; i < accCount; i++) {
        if (accounts[i].accNo == accNo) return i;
    }
    return -1;
}

void deposit() {
    int accNo;
    double amount;
    cout << "Enter Account No: ";
    cin >> accNo;
    int idx = findAccount(accNo);
    if (idx == -1) { cout << "Account not found.\n"; return; }

    cout << "Enter amount to deposit: ";
    cin >> amount;
    if (amount <= 0) { cout << "Invalid amount.\n"; return; }

    accounts[idx].balance += amount;
    cout << "Deposit successful. New balance: " << accounts[idx].balance << endl;
}

void withdraw() {
    int accNo;
    double amount;
    cout << "Enter Account No: ";
    cin >> accNo;
    int idx = findAccount(accNo);
    if (idx == -1) { cout << "Account not found.\n"; return; }

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if (amount <= 0) { cout << "Invalid amount.\n"; return; }
    if (amount > accounts[idx].balance) { cout << "Insufficient balance.\n"; return; }

    accounts[idx].balance -= amount;
    cout << "Withdrawal successful. New balance: " << accounts[idx].balance << endl;
}

void checkBalance() {
    int accNo;
    cout << "Enter Account No: ";
    cin >> accNo;
    int idx = findAccount(accNo);
    if (idx == -1) { cout << "Account not found.\n"; return; }

    cout << "Account Holder: " << accounts[idx].name
         << " | Balance: " << accounts[idx].balance << endl;
}

void displayAll() {
    if (accCount == 0) { cout << "No accounts found.\n"; return; }
    cout << "\n---- All Accounts ----\n";
    for (int i = 0; i < accCount; i++) {
        cout << "Acc No: " << accounts[i].accNo
             << " | Name: " << accounts[i].name
             << " | Balance: " << accounts[i].balance << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "\n===== Bank Account System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Check Balance\n";
        cout << "5. Display All Accounts\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: createAccount(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: checkBalance(); break;
            case 5: displayAll(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}

