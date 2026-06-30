
#include <iostream>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool isIssued;
};

Book library[100];
int bookCount = 0;

void addBook() {
    Book b;
    b.id = bookCount + 1;
    cout << "Enter Title: ";
    cin.ignore();
    getline(cin, b.title);
    cout << "Enter Author: ";
    getline(cin, b.author);
    b.isIssued = false;

    library[bookCount] = b;
    bookCount++;
    cout << "Book added successfully with ID: " << b.id << endl;
}

void displayBooks() {
    if (bookCount == 0) {
        cout << "No books in library.\n";
        return;
    }
    cout << "\n---- Library Books ----\n";
    for (int i = 0; i < bookCount; i++) {
        cout << "ID: " << library[i].id
             << " | Title: " << library[i].title
             << " | Author: " << library[i].author
             << " | Status: " << (library[i].isIssued ? "Issued" : "Available")
             << endl;
    }
}

void issueBook() {
    int id;
    cout << "Enter Book ID to issue: ";
    cin >> id;
    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            if (library[i].isIssued) {
                cout << "Book is already issued.\n";
            } else {
                library[i].isIssued = true;
                cout << "Book issued successfully.\n";
            }
            return;
        }
    }
    cout << "Book ID not found.\n";
}

void returnBook() {
    int id;
    cout << "Enter Book ID to return: ";
    cin >> id;
    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            if (!library[i].isIssued) {
                cout << "Book was not issued.\n";
            } else {
                library[i].isIssued = false;
                cout << "Book returned successfully.\n";
            }
            return;
        }
    }
    cout << "Book ID not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: issueBook(); break;
            case 4: returnBook(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
