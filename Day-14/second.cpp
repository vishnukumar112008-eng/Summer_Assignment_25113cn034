#include<iostream>
using namespace std;
int main (){
    int n, key , count = 0;
     cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter elements:";
    for(int i = 0; i < n; i++)
       cin >> arr[i];
     
    cout << "enter element to search:";
    cin >> key;

    for (int i = 0; i < n; i++){
        if(arr[i] == key)
         count++;
 
    }
    cout << " frequency = " << count;
    return 0;
}