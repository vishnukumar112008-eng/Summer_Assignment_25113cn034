#include <iostream>
#include <string>
using namespace std;

int roll[100], n = 0;
string name[100];
float marks[100];

void addStudent() {
    cout << "\nEnter Roll No: ";
    cin >> roll[n];

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name[n]);

    cout << "Enter Marks: ";
    cin >> marks[n];

    n++;
}

void displayStudents() {
    if(n == 0) {
        cout << "\nNo Records Found.\n";
        return;
    }

    cout << "\n----- Student Records -----\n";

    for(int i = 0; i < n; i++) {
        cout << "\nRoll No : " << roll[i];
        cout << "\nName    : " << name[i];
        cout << "\nMarks   : " << marks[i] << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n===== Student Management =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
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