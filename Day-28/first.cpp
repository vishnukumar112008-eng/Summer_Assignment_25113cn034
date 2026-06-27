#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n----- Student Record Management -----\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

        case 1: {
            Student s;
            cout << "Enter Roll No: ";
            cin >> s.roll;
            cout << "Enter Name: ";
            cin >> s.name;
            cout << "Enter Marks: ";
            cin >> s.marks;
            students.push_back(s);
            cout << "Student Added Successfully.\n";
            break;
        }

        case 2:
            cout << "\nStudent Records\n";
            for(auto s : students) {
                cout << "Roll: " << s.roll
                     << " Name: " << s.name
                     << " Marks: " << s.marks << endl;
            }
            break;

        case 3: {
            int roll;
            cout << "Enter Roll Number: ";
            cin >> roll;

            bool found = false;
            for(auto s : students) {
                if(s.roll == roll) {
                    cout << "Name: " << s.name
                         << "\nMarks: " << s.marks << endl;
                    found = true;
                }
            }

            if(!found)
                cout << "Student Not Found.\n";
            break;
        }

        case 4:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while(choice != 4);

    return 0;
}