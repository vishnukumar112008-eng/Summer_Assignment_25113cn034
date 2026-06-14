#include <iostream>

using namespace std;
int main (){
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter elements:";
    for(int i = 0; i < n; i++)
       cin >> arr[i];

    cout << "duplicate elements are: ";
    for(int i = 0; i< n ; i++){
        bool isduplicate = false;
        for (int k = 0; k < i; k++){
            if (arr[i] == arr[k]){
                isduplicate = true;
                break;
            }
        }
        if(isduplicate)
          continue;
          int count = 1;
          for(int j = i+1; j < n; j++){
            if (arr[i] == arr[j])
            count++;
          }
          if(count > 1)
            cout << arr[i] << " ";

    }   
    return 0;
}
