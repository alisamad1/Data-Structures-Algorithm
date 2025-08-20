#include<iostream>
using namespace std;
int findsquareroot(int n){
    int s = 0;
    int e = n;
    int target = n;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        mid = s + (e-s)/2;
        if(mid*mid == target){
            return mid;
        }
        else if (mid*mid > target){
            e = mid - 1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }
        mid = s+(e-s)/2;

    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the number n: ";
    cin>>n;
    int ans = findsquareroot(n);
    //cout<<"the square root of number is"<<ans<<endl;
    int precision ;
    cout<<"enter th precision:"<<endl;
    cin>>precision;
    double step = 0.1;
    double final_answer = ans;
    for(int i = 0; i<precision; i++){
        for(double j = final_answer;j*j<=n;j =  j +step){
            final_answer = j;
        }
        step = step / 10;
    }
    cout<<"the square root of number is "<< final_answer<<endl;
    return 0;
}