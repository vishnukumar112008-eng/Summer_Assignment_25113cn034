#include <iostream>
using namespace std;

int main() {
    int n, choice;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    do {
        cout << "\n===== Array Menu =====\n";
        cout << "1. Display\n";
        cout << "2. Find Largest\n";
        cout << "3. Find Smallest\n";
        cout << "4. Sum\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Array: ";
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
                break;

            case 2: {
                int max = arr[0];
                for (int i = 1; i < n; i++)
                    if (arr[i] > max)
                        max = arr[i];
                cout << "Largest = " << max << endl;
                break;
            }

            case 3: {
                int min = arr[0];
                for (int i = 1; i < n; i++)
                    if (arr[i] < min)
                        min = arr[i];
                cout << "Smallest = " << min << endl;
                break;
            }

            case 4: {
                int sum = 0;
                for (int i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Sum = " << sum << endl;
                break;
            }

            case 5:
                cout << "Exit...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}