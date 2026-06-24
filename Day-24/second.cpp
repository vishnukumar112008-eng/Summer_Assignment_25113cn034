#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string result = "";
    int count = 1;

    for (int i = 0; i < str.length(); i++) {
        if (i < str.length() - 1 && str[i] == str[i + 1])
            count++;
        else {
            result += str[i];
            result += to_string(count);
            count = 1;
        }
    }

    cout << "Compressed String: " << result;

    return 0;
}