#include<iostream>
using namespace std;
void grade_calculator(int marks){
    if(marks > 90){
        cout<< "A grade";
    }
    else if (marks > 80){
        cout<< "B grade";
    }
    else if(marks > 70){
        cout<<" C grade";
    }
    else if(marks > 60){
        cout << "D grade";
    }
    else {
        cout << "F grade";
    }
}
int main(){
    int marks;
    cout<< "Enter the marks obtained by student: ";
    cin >> marks;
    grade_calculator(marks);
    return 0;
}