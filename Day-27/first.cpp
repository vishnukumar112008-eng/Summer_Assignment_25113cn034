#include <iostream>
using namespace std;

int main() {
    int choice;
    string book;
    bool issued = false;

    do {
        cout << "\n----- Library Management System -----\n";
        cout << "1. Issue Book\n";
        cout << "2. Return Book\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                if(!issued) {
                    cout << "Enter Book Name: ";
                    cin.ignore();
                    getline(cin, book);
                    issued = true;
                    cout << book << " issued successfully.\n";
                } else {
                    cout << "A book is already issued.\n";
                }
                break;

            case 2:
                if(issued) {
                    cout << book << " returned successfully.\n";
                    issued = false;
                } else {
                    cout << "No book issued.\n";
                }
                break;

            case 3:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 3);

    return 0;
}