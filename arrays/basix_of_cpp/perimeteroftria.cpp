#include <iostream>
using namespace std;
 int main(){
    int A,B,C;
    int Perimeter_of_triangle;
    cout << "enter the length of side A of triangle ABC: ",A;
    cin >> A;
    cout << "enter the length of side B of triangle ABC: ", B;
    cin >> B;
    cout << "enter the lengt of side C of triangle ABC: ",C;
    cin >> C;
    Perimeter_of_triangle = A + B + C;
    cout << "the perimeter of triangle ABC is " <<  Perimeter_of_triangle <<endl;
    return 0; 
 }