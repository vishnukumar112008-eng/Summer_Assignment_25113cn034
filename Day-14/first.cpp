#include<iostream>
using namespace std;
int main(){
    int n, key;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter elements:";
    for(int i = 0; i < n; i++)
       cin >> arr[i];
     
    cout << "enter element to search:";
    cin >> key;
    
    int pos = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            pos = i;
            break;
        }
    }
     
    if(pos != -1)
       cout << "element found at index ";
    else
       cout << "element not found";
       return 0;
          
}