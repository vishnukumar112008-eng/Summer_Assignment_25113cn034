#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0};

    for (char ch : str)
        freq[ch]++;

    for (char ch : str) {
        if (freq[ch] == 1) {
            cout << "First non-repeating character: " << ch;
            return 0;
        }
    }

    cout << "No non-repeating character found.";
    return 0;
}
