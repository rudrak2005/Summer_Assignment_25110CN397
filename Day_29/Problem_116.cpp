/*
    Q116 - Inventory Management System
*/

#include <iostream>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    double price;
};

Item inventory[100];
int itemCount = 0;

void addItem() {
    Item it;
    it.id = itemCount + 1;
    cout << "Enter Item Name: ";
    cin.ignore();
    getline(cin, it.name);
    cout << "Enter Quantity: ";
    cin >> it.quantity;
    cout << "Enter Price per unit: ";
    cin >> it.price;

    inventory[itemCount] = it;
    itemCount++;
    cout << "Item added successfully with ID: " << it.id << endl;
}

void displayItems() {
    if (itemCount == 0) { cout << "Inventory is empty.\n"; return; }
    cout << "\n---- Inventory List ----\n";
    double totalValue = 0;
    for (int i = 0; i < itemCount; i++) {
        double value = inventory[i].quantity * inventory[i].price;
        totalValue += value;
        cout << "ID: " << inventory[i].id
             << " | Name: " << inventory[i].name
             << " | Qty: " << inventory[i].quantity
             << " | Price: " << inventory[i].price
             << " | Value: " << value << endl;
    }
    cout << "Total Inventory Value: " << totalValue << endl;
}

int findItem(int id) {
    for (int i = 0; i < itemCount; i++) {
        if (inventory[i].id == id) return i;
    }
    return -1;
}

void updateStock() {
    int id, qty;
    cout << "Enter Item ID: ";
    cin >> id;
    int idx = findItem(id);
    if (idx == -1) { cout << "Item not found.\n"; return; }

    cout << "Enter quantity to add (-ve to reduce): ";
    cin >> qty;

    if (inventory[idx].quantity + qty < 0) {
        cout << "Error: Stock cannot go negative.\n";
        return;
    }
    inventory[idx].quantity += qty;
    cout << "Stock updated. New quantity: " << inventory[idx].quantity << endl;
}

void checkLowStock() {
    int threshold;
    cout << "Enter low-stock threshold: ";
    cin >> threshold;

    bool found = false;
    cout << "\n---- Low Stock Items ----\n";
    for (int i = 0; i < itemCount; i++) {
        if (inventory[i].quantity < threshold) {
            cout << inventory[i].name << " | Qty: " << inventory[i].quantity << endl;
            found = true;
        }
    }
    if (!found) cout << "No items below threshold.\n";
}

void deleteItem() {
    int id;
    cout << "Enter Item ID to delete: ";
    cin >> id;
    int idx = findItem(id);
    if (idx == -1) { cout << "Item not found.\n"; return; }

    for (int j = idx; j < itemCount - 1; j++) {
        inventory[j] = inventory[j + 1];
    }
    itemCount--;
    cout << "Item deleted successfully.\n";
}

int main() {
    int choice;
    do {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Update Stock\n";
        cout << "4. Check Low Stock\n";
        cout << "5. Delete Item\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addItem(); break;
            case 2: displayItems(); break;
            case 3: updateStock(); break;
            case 4: checkLowStock(); break;
            case 5: deleteItem(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}

