#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    vector<int> a(n1);

    cout << "Enter sorted elements of first array:\n";
    for(int i = 0; i < n1; i++)
        cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> n2;
    vector<int> b(n2);

    cout << "Enter sorted elements of second array:\n";
    for(int i = 0; i < n2; i++)
        cin >> b[i];

    vector<int> merged;
    int i = 0, j = 0;

    while(i < n1 && j < n2) {
        if(a[i] <= b[j])
            merged.push_back(a[i++]);
        else
            merged.push_back(b[j++]);
    }

    while(i < n1)
        merged.push_back(a[i++]);

    while(j < n2)
        merged.push_back(b[j++]);

    cout << "Merged Array: ";
    for(int x : merged)
        cout << x << " ";

    return 0;
}