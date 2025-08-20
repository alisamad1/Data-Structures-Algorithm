#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter thre value of n: ";
    cin >> n;
    switch(n){
        case 1: if(n==1){
            cout<<"ramesh madarchod";
            break;
        }
        case 2: if(n==2){
            cout<<"Mahesh Madarchod";
            break;
        }
        case 3: if(n==3){
            cout<<"Raman Madarchod";
            break;
        }
        case 4: if(n==4){
            cout<<"Asheesh Madarchod";
            break;
        }
        default: cout<<"Kalinga Madarchod";
        break ;
    }
}