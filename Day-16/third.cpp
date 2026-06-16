#include<iostream>
using namespace std;
int main (){
    int n,sum;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    cin >> arr[i];

    cout << "enter target sum: ";
    cin >> sum;
     
    bool found = false;

    for(int i = 0; i< n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] + arr[j] ==  sum){
                cout << arr[i] << " + " << arr[j]
                << " = " << sum << endl;
                found = true;

            }
        }
    }
    if(!found)
    cout <<"no pair found" ;
    return 0;


}