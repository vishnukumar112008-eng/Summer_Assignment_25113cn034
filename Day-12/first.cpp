#include<iostream>
using namespace std;
bool ispalindrome(int n){
    int original=n, rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n/=10;
    }
    return original==rev;
}
    
int main(){
    int num;
    cin>>num;
    if(ispalindrome(num)){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}