#include <iostream>
using namespace std;

struct Item {
    int id;
    char name[30];
    int quantity;
    float price;
};

int main() {
    int n;

    cout << "Enter number of items: ";
    cin >> n;

    Item item[n];

    for (int i = 0; i < n; i++) {
        cout << "\nItem " << i + 1 << endl;

        cout << "ID: ";
        cin >> item[i].id;

        cout << "Name: ";
        cin >> item[i].name;

        cout << "Quantity: ";
        cin >> item[i].quantity;

        cout << "Price: ";
        cin >> item[i].price;
    }

    cout << "\n========== Inventory ==========\n";

    for (int i = 0; i < n; i++) {
        cout << "ID       : " << item[i].id << endl;
        cout << "Name     : " << item[i].name << endl;
        cout << "Quantity : " << item[i].quantity << endl;
        cout << "Price    : " << item[i].price << endl;
        cout << "Total    : " << item[i].quantity * item[i].price << endl;
        cout << "-------------------------\n";
    }

    return 0;
}