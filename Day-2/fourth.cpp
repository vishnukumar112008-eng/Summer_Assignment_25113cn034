#include<iostream>
using namespace std;
int main(){
    int n , orig_n ,rever_n = 0 , digit;
    cout <<" Enter a positive integer: ";
    cin>> n;
    orig_n = n;
    while (n > 0) {
        digit = n % 10;
        rever_n = rever_n *10 + digit;
        n = n /10;

    }
    cout<<" Reversed number: "<< rever_n << endl;
    if (orig_n == rever_n){
        cout<<" The number is a pallindrome." << endl;

    }
    else{
        cout <<" is not a pallindrome." << endl;

    }
    return 0;
    
}