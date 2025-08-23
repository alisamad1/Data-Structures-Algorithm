#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin >> n;
    for(int i = 1; i<n; i++){
        int count = 1;
        for(int  j = 1;j<=i;j++){
            cout<<count<<" ";
            count = count * (i-j)/j;
        }
        cout<<endl;
    }
    return 0;
}