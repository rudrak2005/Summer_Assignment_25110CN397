

#include <iostream>
using namespace std;

struct Contact {
    string name;
    string phone;
    string email;
};

Contact contacts[100];
int contactCount = 0;

void addContact() {
    Contact c;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, c.name);
    cout << "Enter Phone: ";
    getline(cin, c.phone);
    cout << "Enter Email: ";
    getline(cin, c.email);

    contacts[contactCount] = c;
    contactCount++;
    cout << "Contact added successfully!\n";
}

void displayContacts() {
    if (contactCount == 0) {
        cout << "No contacts found.\n";
        return;
    }
    cout << "\n---- Contact List ----\n";
    for (int i = 0; i < contactCount; i++) {
        cout << i + 1 << ". " << contacts[i].name
             << " | " << contacts[i].phone
             << " | " << contacts[i].email << endl;
    }
}

void searchContact() {
    string name;
    cout << "Enter name to search: ";
    cin.ignore();
    getline(cin, name);

    bool found = false;
    for (int i = 0; i < contactCount; i++) {
        if (contacts[i].name == name) {
            cout << "Found: " << contacts[i].name
                 << " | " << contacts[i].phone
                 << " | " << contacts[i].email << endl;
            found = true;
        }
    }
    if (!found) cout << "Contact not found.\n";
}

void deleteContact() {
    string name;
    cout << "Enter name to delete: ";
    cin.ignore();
    getline(cin, name);

    for (int i = 0; i < contactCount; i++) {
        if (contacts[i].name == name) {
            // Shift all elements left to fill the gap
            for (int j = i; j < contactCount - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            contactCount--;
            cout << "Contact deleted successfully.\n";
            return;
        }
    }
    cout << "Contact not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addContact(); break;
            case 2: displayContacts(); break;
            case 3: searchContact(); break;
            case 4: deleteContact(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}

