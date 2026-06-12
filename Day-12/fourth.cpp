#include<iostream>
using namespace std;
bool isperfect(int n){
    int sum = 0;
    for (int i = 1; i <= n/2; i++){
        if(n % i == 0)
        sum += i;
    }
    return sum == n;

}
int main (){
    int num;
    cin >> num;
    if (isperfect(num)){
        cout << "perfect number";
    }
    else{
        cout << "not perfect number";
    }
    return 0;
}