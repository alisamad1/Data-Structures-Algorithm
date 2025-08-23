#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"nter the value of n: ";
    cin >> n;
    int c = 1;
    //growinhg phase
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<< c ;
            c++;
        }
        cout<<endl;
    }
    //shrinking phase
    for(int i = 0; i<n; i++){
        for(int j =0; j<n-i-1;j++){
            cout<<"*";
        }
    }
    cout<<endl;
}