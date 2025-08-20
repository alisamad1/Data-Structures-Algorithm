#include<iostream>
#include <cmath>
using namespace std;
//Method Number 2
//Bitwise Method
//1.Obtain bit and bitwise AND operation i.e(N & 1)
//2.Right shift N by 1
int decimaltobinaryMethod2(int n){
    int binaryno = 0;
    int i = 0;
    while(n>0){
        int bit = (n & 1);
        binaryno = bit*pow(10,i++) + binaryno;
        n = n>> 1;
    }
    return binaryno;
}
int binarytodecimal(int n){
    int decimalno = 0;
    return decimal;
}
int main(){
    int n;
    cout<< "enter the value of N: ";
    cin >> n;
    return 0;
}