#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool UglyNumber(int n){
    for(int i = 2; i < 6 && n ; i++){
        while(n % i == 0){
            n = n / i;
        }
    }
    return n == 1;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if(UglyNumber(n)){
        cout << "The Number: " << n << " is an ugly number" << endl;
    }
    else{
        cout << "The Number: " << n << " is not an ugly number" << endl;
    }
    return 0;
}