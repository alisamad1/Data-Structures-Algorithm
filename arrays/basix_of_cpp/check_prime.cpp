#include<iostream>
using namespace std;
bool checkPrime(int n){
    int i = 2;
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin >> n;
    bool isPrime = checkPrime(n);
    if(isPrime){
        cout<<"Prime number\n";
    }
    else{
        cout<<"not a prime number";
    }
    return 0;
}