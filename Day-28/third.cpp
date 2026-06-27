#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    int id;
    string name;
    float basicSalary;
};

int main() {

    vector<Employee> emp;
    int choice;

    do {

        cout << "\n----- Salary Management System -----\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Salary\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1: {
            Employee e;

            cout << "Enter Employee ID: ";
            cin >> e.id;

            cout << "Enter Name: ";
            cin >> e.name;

            cout << "Enter Basic Salary: ";
            cin >> e.basicSalary;

            emp.push_back(e);

            cout << "Employee Added.\n";
            break;
        }

        case 2:

            for(auto e : emp) {

                float hra = 0.20 * e.basicSalary;
                float da = 0.10 * e.basicSalary;
                float gross = e.basicSalary + hra + da;

                cout << "\nEmployee ID: " << e.id;
                cout << "\nName: " << e.name;
                cout << "\nBasic Salary: " << e.basicSalary;
                cout << "\nHRA: " << hra;
                cout << "\nDA: " << da;
                cout << "\nGross Salary: " << gross << endl;
            }

            break;

        case 3:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while(choice != 3);

    return 0;
}