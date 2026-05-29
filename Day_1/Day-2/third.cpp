#include<iostream>
using namespace std;
int main(){
    int n, digit, product = 1;
    cout<<" Enter a number:";
    cin>> n;
    if (n ==0){
        product = 0;
    }
    else{
        if( n < 0) n = -n;
        while (n > 0){
            digit = n % 10;
            product *= digit;
            n = n/ 10;

        }
    }
    cout<<" Product of digit: "<< product <<endl;
    return 0;

}