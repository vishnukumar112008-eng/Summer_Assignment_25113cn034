#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
};

int main() {

    vector<Employee> emp;
    int choice;

    do {
        cout << "\n----- Employee Management -----\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1: {
            Employee e;
            cout << "Enter ID: ";
            cin >> e.id;
            cout << "Enter Name: ";
            cin >> e.name;
            cout << "Enter Department: ";
            cin >> e.department;

            emp.push_back(e);
            cout << "Employee Added.\n";
            break;
        }

        case 2:
            for(auto e : emp) {
                cout << "ID: " << e.id
                     << " Name: " << e.name
                     << " Department: " << e.department << endl;
            }
            break;

        case 3: {
            int id;
            cout << "Enter Employee ID: ";
            cin >> id;

            bool found = false;

            for(auto e : emp) {
                if(e.id == id) {
                    cout << "Name: " << e.name << endl;
                    cout << "Department: " << e.department << endl;
                    found = true;
                }
            }

            if(!found)
                cout << "Employee Not Found.\n";

            break;
        }

        case 4:
            cout << "Exit.\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while(choice != 4);

    return 0;
}