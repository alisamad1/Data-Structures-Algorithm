#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of N: "<<endl;
    cin>>n;
    // Increasive part of our diamond
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=i; j++){
            cout<<"*"<<endl;
        }
        cout<<endl;
    }
    // decreasive part of our diamond
    for(int i = n-2; i>=0; i--){
        for(int j = 0; j<=i; j++){
            cout<<"*"<<endl;
        }
        cout<<endl;
    }
    return 0;
}