#include<iostream>
using namespace std;
int getsum(int n){
    int sum = 0;
    for(int i=1; i<1;i++){
        sum += i;
    }
    return sum;
}
int getevensum(int n){
    int sum = 0;
    for(int i =2; i<n; i++){
        if(i%2==0){
            sum += i;
        }
    }
}
int main(){
    int n;
    cout<<"enter n: ";
    cin >> n;

}