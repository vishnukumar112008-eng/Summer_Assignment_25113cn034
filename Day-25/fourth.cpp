#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compareLength(string a, string b) {
    return a.length() < b.length();
}

int main() {
    int n;

    cout << "Enter number of words: ";
    cin >> n;

    vector<string> words(n);

    cout << "Enter words:\n";
    for(int i = 0; i < n; i++)
        cin >> words[i];

    sort(words.begin(), words.end(), compareLength);

    cout << "\nWords Sorted by Length:\n";
    for(string word : words)
        cout << word << endl;

    return 0;
}