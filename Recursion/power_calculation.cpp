// we will be writing a fuction for calculating power using recursion
#include<iostream>
using namespace std;
int calculatePower(int a, int b){
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }
    int ans = calculatePower(a, b/2);
    if(b % 2 == 0){
        return ans * ans;
    }
    else{
        return a * ans * ans;
    }
}
int main(){
    int a, b;
    cin >> a >> b;
    int ans = calculatePower(a, b);
    cout << "The result of " << a << " raised to the power of " << b << " is: " << ans << endl;
    return 0;
}