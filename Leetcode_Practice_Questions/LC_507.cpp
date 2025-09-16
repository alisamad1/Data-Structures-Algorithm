#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool perfectNumber(int num){
    int s = 0;
    int a = num;
    for(int i = 1; i <= num / 2; i++){
        if(num % i == 0){
            s += i;
        }
    }
    if(s == a){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if(perfectNumber(num)){
        cout << "The Number: " << num << " is a perfect number"  << endl;
    }
    else{
        cout << "The Number: " << num << "is not a perfect number" << endl;
    }
    return 0;
}