 #include<iostream>
using namespace std;
int main(){
    int A,B,C;
    cout << "enter the A number: ";
    cin >> A;
    cout << "enter the B number: ";
    cin >> B;
    cout << "enter the C nunmber: ";
    cin >> C;
    if(A>=B && A>=C){
        cout << "A is the maximium element";
    }
    else if(B>=A && B>=C){
        cout << "B is the maximim element";
    }
    else if(C>=A && C>=B){
        cout << "C is the maximium element";
    }
    return 0;
}