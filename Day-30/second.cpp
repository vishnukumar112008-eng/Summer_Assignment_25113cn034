#include <iostream>
#include <string>
using namespace std;

int main() {
    string book[100];
    bool issued[100];
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    cin.ignore();

    for(int i = 0; i < n; i++) {
        cout << "Enter Book " << i + 1 << " Name: ";
        getline(cin, book[i]);
        issued[i] = false;
    }

    int choice;

    do {
        cout << "\n1. Display Books";
        cout << "\n2. Issue Book";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if(choice == 1) {
            cout << "\nLibrary Books\n";
            for(int i = 0; i < n; i++) {
                cout << i + 1 << ". " << book[i];
                if(issued[i])
                    cout << " (Issued)";
                else
                    cout << " (Available)";
                cout << endl;
            }
        }
        else if(choice == 2) {
            int b;
            cout << "Enter Book Number: ";
            cin >> b;

            if(!issued[b - 1]) {
                issued[b - 1] = true;
                cout << "Book Issued Successfully.\n";
            } else {
                cout << "Book Already Issued.\n";
            }
        }

    } while(choice != 3);

    return 0;
}