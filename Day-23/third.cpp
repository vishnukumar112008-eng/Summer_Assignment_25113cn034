#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    int freq[256] = {0};

    for (char ch : str1)
        freq[ch]++;

    for (char ch : str2)
        freq[ch]--;

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            cout << "Strings are not anagrams.";
            return 0;
        }
    }

    cout << "Strings are anagrams.";
    return 0;
}