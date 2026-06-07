#include<iostream>

using namespace std;
int reverseDigits(int n, int rev = 0){
    if (n == 0){
        return rev;
    }
    else{
        return reverseDigits(n / 10, rev * 10 + n % 10);
    }
}
int main(){
    int n;
    cin >> n;
    cout << "reverse of digits = " << reverseDigits(n);
    return 0;
    
}