// converting decimal to binary conversion
// Division Method
//step-1:- Divide Number by 2;
//step:-2:- Store remainder(There will be a bit in binary number)
//step-3:-Repeat the above steps with the quotient is less than 2
//step-3:- Reverse the bits so obtained
#include<iostream>
#include <cmath>
using namespace std;
int decimaltoBinaryMethod_1(int n){
    int binaryno = 0;
    int i = 0;
    while(n>0){
        int bit = n % 2;
        binaryno = bit*pow(10,i++) + binaryno;
        n = n/ 2;
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter the value of N: "<< endl;
    cin >> n;
    int binary = decimaltoBinaryMethod_1(n);
    cout<<binary<<endl;
}