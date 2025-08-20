#include<iostream>
using namespace std;
int solve(int dividend, int divisor){
    int s = 0;
    int e = abs(dividend);
     int ans = 1;
     int mid = s+(e-s)/2;
     while(s<=e){
        if(abs(mid*divisor == dividend)){
            ans = mid;
            break;
        }
        else if(abs(mid * divisor > dividend)){
            e = mid - 1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }
        mid = s+(e-s)/2;
     }
     if((divisor<0 && dividend < 0) || (divisor >0 && dividend > 0)){
        return ans;
     }
     else{
        return -ans;
     }
}
int main(){
    int dividend;
    int divisior;
    cout<<"enter the dividend:";
    cin>>dividend;
    cout<<"enter thr divisor: ";
    cin>>divisior;
    int ans = solve(dividend,divisior);
    cout << "ans is "<<ans <<endl;
    return 0;
}