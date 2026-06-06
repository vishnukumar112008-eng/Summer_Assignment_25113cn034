#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long binary;
    cout<<"enter a binary number: ";
    cin >> binary;
     
    int decimal = 0,base = 0;
    while (binary > 0) {
        int rem = binary % 10;
        decimal += rem * pow(2, base);
        binary /= 10;
        base++;
    }
    cout << " decimal: "<<decimal;
    return 0;
    

}