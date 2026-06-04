#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, temp, rem, digits = 0;
    cin >> n;

    temp = n;
     while ( temp > 0){
        rem = temp % 10;
        digits++;
        temp = temp / 10;
     }
        temp = n;
        int sum = 0;
        while ( temp > 0){
            rem = temp % 10;
            sum = sum + pow(rem, digits);
            temp = temp / 10;
        }
        if ( sum == n)
        cout << "Armstrong Number";
        else    
        cout << "Not an Armstrong Number";
        return 0;

}