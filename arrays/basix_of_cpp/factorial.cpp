#include<iostream>
using namespace std;
long long int fact(int n){
    int fact = 1;
    for(int i = 1; i <=n; i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin >> n;
    long long int ans = fact(n);
    cout<<"factorial of a given numbers "<< ans;
    return 0;
}