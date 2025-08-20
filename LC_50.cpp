#include<iostream>
#include<vector>
using namespace std;
double solve(double x , int n){
    if(n == 0){
        return 1;
    }
    if(n<0){
        return 1/ solve(x, -1);
    }
    if(n%2==0){
        return solve(x*x,n/2);
    }
    return x*solve(x*x,(n-1)/2);
}
double myPow(double x, int n){
    return solve(x, (long)n);
}
int main(){
    double x = 2.000;
    int n = 7;
    cout<<myPow(x,n)<<endl;
    return 0;
}