#include<iostream>
using namespace std;
void checkEvenOdd(int n){
    if(n%2 == 0){
        cout<<"Number is Even";
    }
    else{
        cout<<"Number is odd";
    }
}
int main(){
    int n;
    cout<<"enter the value of N: ";
    cin >> n;
    checkEvenOdd(n);
}