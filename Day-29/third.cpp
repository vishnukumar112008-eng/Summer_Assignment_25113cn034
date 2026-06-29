#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    int choice;

    cout << "Enter a string: ";
    cin.ignore();
    cin.getline(str, 100);

    do {
        cout << "\n===== String Menu =====\n";
        cout << "1. Length\n";
        cout << "2. Reverse\n";
        cout << "3. Uppercase\n";
        cout << "4. Lowercase\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Length = " << strlen(str) << endl;
                break;

            case 2: {
                char temp[100];
                strcpy(temp, str);
                strrev(temp);
                cout << "Reverse = " << temp << endl;
                break;
            }

            case 3:
                for (int i = 0; str[i]; i++)
                    cout << (char)toupper(str[i]);
                cout << endl;
                break;

            case 4:
                for (int i = 0; str[i]; i++)
                    cout << (char)tolower(str[i]);
                cout << endl;
                break;

            case 5:
                cout << "Exit...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}