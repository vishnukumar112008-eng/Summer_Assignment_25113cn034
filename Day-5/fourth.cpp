#include<iostream>
using namespace std;

bool isprime(int n) {
    if (n<2) return false;
    for ( int i = 2; i * i <= n; i++)
    {
        if( n % i == 0)
        return false;
    }
    return true;
}
int main(){
  int n, largest = -1;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && isprime(i))
            largest = i;
        
    }
    cout << "Largest prime factor = " << largest;
    return 0;
}