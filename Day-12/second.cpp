#include<iostream>
#include<cmath>
using namespace std;

bool isarmstrong(int n){
    int original = n, sum = 0, digits = 0,temp = n;
    while(temp > 0){
        digits++;
        temp /= 10;
    }
  temp = n;
  while(temp>0){
    int digit = temp % 10;
    sum += pow(digit,digits);
    temp /= 10;
  }
  return sum == original;
}
int main (){
    int num;
    cin >> num;

    if (isarmstrong(num)){
        cout << "armstrong";
    }
    else
        cout << "not armstrong";


    
    
    return 0;

}
 