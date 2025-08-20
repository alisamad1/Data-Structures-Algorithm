#include<iostream>
using namespace std;
int main(){
    int principal;
    int rate_of_interest;
    int time;
    int simple_interest;
    cout<<"enter the principal amount: ";
    cin >>  principal;
    cout << "enter the rate of interest applied: ",
    cin >> rate_of_interest;
    cout << "enter the time reaqired: ";
    cin >> time;
    simple_interest = (principal * rate_of_interest* time) / 100;
    cout << "the simple interest of the above details is: "<< simple_interest<< endl;
    return 0;
}