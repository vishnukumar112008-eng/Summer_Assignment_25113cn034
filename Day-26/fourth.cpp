#include <iostream>
using namespace std;

int main() {
    int score = 0, ans;

    cout << "----- QUIZ APPLICATION -----\n";

    cout << "\n1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cin >> ans;
    if (ans == 2)
        score++;

    cout << "\n2. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cin >> ans;
    if (ans == 3)
        score++;

    cout << "\n3. Which language is used for system programming?\n";
    cout << "1. C++\n2. HTML\n3. CSS\n4. SQL\n";
    cin >> ans;
    if (ans == 1)
        score++;

    cout << "\nYour Score = " << score << "/3";

    return 0;
}