#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;
int main (){
    int n;

    cout << "Enter number of names: ";
    cin >> n;
    cin.ignore();

    vector<string> names(n);

    cout << "Enter names:\n";
    for(int i = 0; i < n; i++)
        getline(cin, names[i]);

    sort(names.begin(), names.end());

    cout << "\nNames in Alphabetical Order:\n";
    for(string name : names)
        cout << name << endl;

    return 0;


}