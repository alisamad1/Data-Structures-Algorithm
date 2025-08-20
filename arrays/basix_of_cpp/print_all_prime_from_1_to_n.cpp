#include<iostream>
using namespace std;
bool checkPrime(int n){
    int i = 2;
    for(int i = 2; i < n; i++){
        if(i % n == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n ;
    cin >> n ;
    for(int i = 1; i<=n; i++){
        bool isPrime = checkPrime(i);
        cout<<"Enter the value of n: ";
        cout<<i<<" ";
    }
}