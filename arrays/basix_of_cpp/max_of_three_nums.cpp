#include<iostream>
using namespace std;
int max_of_three_numbers(int a, int b, int c){
    if(a>b && a>c){
        cout<<"A is the maximum number";
    }
    else if(b>a && b>c){
        cout<<"B is the maximum number";
    }
    else{
        cout<<"C is the maximum number";
    }
}
int main(){
    int a,b,c;
    cout<<"Enter the value of A: ";
    cin >> a;
    cout << "Enter the value of B: ";
    cin >> b;
    cout << "Enter the value of C: ";
    cin >> c;
    int result = max_of_three_numbers(a,b,c);
    cout<<  result;
    return 0;
}