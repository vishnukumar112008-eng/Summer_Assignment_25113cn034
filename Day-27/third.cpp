#include <iostream>
using namespace std;

int main() {
    int seats = 10, book;

    cout << "Available Seats: " << seats << endl;

    cout << "Enter Number of Seats to Book: ";
    cin >> book;

    if(book <= seats) {
        seats -= book;
        cout << "Booking Successful!\n";
        cout << "Remaining Seats: " << seats;
    }
    else {
        cout << "Seats Not Available!";
    }

    return 0;
}