

#include <iostream>
using namespace std;

const int TOTAL_SEATS = 10;
bool seats[TOTAL_SEATS];
string passengerName[TOTAL_SEATS];

void displaySeats() {
    cout << "\n---- Seat Status ----\n";
    for (int i = 0; i < TOTAL_SEATS; i++) {
        cout << "Seat " << i + 1 << ": "
             << (seats[i] ? ("Booked (" + passengerName[i] + ")") : "Available")
             << endl;
    }
}

void bookTicket() {
    int seatNo;
    cout << "Enter seat number to book (1-" << TOTAL_SEATS << "): ";
    cin >> seatNo;

    if (seatNo < 1 || seatNo > TOTAL_SEATS) {
        cout << "Invalid seat number.\n";
        return;
    }
    if (seats[seatNo - 1]) {
        cout << "Seat already booked!\n";
        return;
    }

    cout << "Enter passenger name: ";
    cin.ignore();
    getline(cin, passengerName[seatNo - 1]);

    seats[seatNo - 1] = true;
    cout << "Ticket booked successfully for seat " << seatNo << endl;
}

void cancelTicket() {
    int seatNo;
    cout << "Enter seat number to cancel: ";
    cin >> seatNo;

    if (seatNo < 1 || seatNo > TOTAL_SEATS) {
        cout << "Invalid seat number.\n";
        return;
    }
    if (!seats[seatNo - 1]) {
        cout << "Seat is not booked.\n";
        return;
    }

    seats[seatNo - 1] = false;
    passengerName[seatNo - 1] = "";
    cout << "Booking cancelled for seat " << seatNo << endl;
}

int main() {
    // Initialize all seats as available
    for (int i = 0; i < TOTAL_SEATS; i++) seats[i] = false;

    int choice;
    do {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Display Seats\n";
        cout << "2. Book Ticket\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: displaySeats(); break;
            case 2: bookTicket(); break;
            case 3: cancelTicket(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
