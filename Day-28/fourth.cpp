#include <iostream>
using namespace std;

int main()
{
    string name;
    int roll;
    float marks[5], total = 0, percentage;
    char grade;

    cout << "===== MARKSHEET GENERATION SYSTEM =====\n";

    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Marks of 5 Subjects (out of 100):\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    percentage = total / 5;

    
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

   
    bool pass = true;
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] < 35)
        {
            pass = false;
            break;
        }
    }

    
    cout << "\n========== MARKSHEET ==========\n";
    cout << "Student Name : " << name << endl;
    cout << "Roll Number  : " << roll << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << " Marks : " << marks[i] << endl;
    }

    cout << "-------------------------------\n";
    cout << "Total Marks : " << total << "/500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;

    if (pass)
        cout << "Result      : PASS" << endl;
    else
        cout << "Result      : FAIL" << endl;

    return 0;
}