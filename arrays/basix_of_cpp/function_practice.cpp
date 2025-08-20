#include<iostream>
using namespace std;
int add(int a, int b){
    int result = a + b;
    return result;
}
int main(){
    int a,b;
    cout<<"enter the value of A: ";
    cin >> a;
    cout<<"enter the value of B: ";
    cin >> b;
    int sum = add(a,b);
    cout<<"the sum of two numbers A and B is: "<< sum<< endl;
}