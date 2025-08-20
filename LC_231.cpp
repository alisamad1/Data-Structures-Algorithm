#include<iostream>
using namespace std;
bool isPowerofTwo(int n){
    if(n == 1){
        return true;
    }
    if( n <=  0 || n % 2 != 0){
        return false;
    }
    return isPowerofTwo(n/2);
}
int main(){
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    if(isPowerofTwo(n)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    return 0;
}