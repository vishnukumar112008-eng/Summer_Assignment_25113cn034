#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    if (str1.length() != str2.length()) {
        cout << "Not a rotation.";
        return 0;
    }

    string temp = str1 + str1;

    if (temp.find(str2) != string::npos)
        cout << "Strings are rotations of each other.";
    else
        cout << "Strings are not rotations of each other.";

    return 0;
}