#include <iostream>
#include <set>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    set<char> common;

    for(char c1 : str1) {
        for(char c2 : str2) {
            if(c1 == c2)
                common.insert(c1);
        }
    }

    cout << "Common Characters: ";
    for(char c : common)
        cout << c << " ";

    return 0;
}