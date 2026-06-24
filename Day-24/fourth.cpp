#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    bool visited[256] = {false};
    string result = "";

    for (char ch : str) {
        if (!visited[ch]) {
            result += ch;
            visited[ch] = true;
        }
    }

    cout << "String after removing duplicates: " << result;

    return 0;
}