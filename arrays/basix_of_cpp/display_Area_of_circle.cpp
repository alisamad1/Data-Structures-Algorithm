#include<iostream>
using namespace std;
void displayAreaofCircle(int radius){
    double area = 3.14 * radius * radius;
    cout<<"the area of a circle is "<< area;
}
int main(){
    int radius;
    cout<<"enter the radius of a circle";
    cin >> radius;
    displayAreaofCircle(radius);
    return 0;
}