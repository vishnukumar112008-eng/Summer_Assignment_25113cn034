#include<iostream>
using namespace std;
int main(){
    int n, count = 0;
    cout<<"enter a number: ";
    cin>> n;
    while(n > 0){
        count += n & 1;
        n =n >> 1;
    }
    cout<<"number of sets bits: "<<count;
    return 0;
}