#include<iostream>
using namespace std;
int main(){


int n;
cout << "enter size of array: ";
cin >> n;
int arr[n];
int sum = 0;
cout << "enter element: ";
for(int i = 0; i < n ; i++){
    cin >> arr[i];
    sum += arr[i];  
   
    }
    double avg = (double)sum / n;
    cout << "sum = " << sum << endl;
    cout << "average = " << avg;
    return 0;

 

}