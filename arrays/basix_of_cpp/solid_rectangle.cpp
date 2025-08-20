// we have to print a solid rectangle pattern using *
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter the value of n: " << endl;
    cin >> n;
    //outer loop - to print number of rows 
    for(int row = 0; row < n; row++){
        //inner loop - to print the number of colunms
        for(int col = 0; col < n; col++){
            cout<< "* ";
        }
        cout<<endl;
    }
}