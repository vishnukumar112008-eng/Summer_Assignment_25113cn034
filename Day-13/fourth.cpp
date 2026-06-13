#include<iostream>
using namespace std;
int main(){

int n;
   cout << "enter size of array: ";
   cin >> n;
   int arr[n];
   int even = 0, odd = 0;
   cout << "enter element: ";
   for(int i = 0; i < n ; i++){
   cin >> arr[i];
   if (arr[i] % 2 == 0)
     even++;
   else
     odd++;
   }
   cout << " even elements = " << even << endl;
   cout << "odd elements = " << odd;
   return 0;
}