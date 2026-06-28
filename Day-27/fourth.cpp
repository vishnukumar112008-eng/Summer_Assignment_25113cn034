#include <iostream>
using namespace std;

int main() {
    string name;
    long long phone;

    cout << "----- Contact Management System -----\n";

    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Phone Number: ";
    cin >> phone;

    cout << "\nContact Saved Successfully!\n";

    cout << "\nContact Details\n";
    cout << "Name : " << name << endl;
    cout << "Phone: " << phone << endl;

    return 0;
}
