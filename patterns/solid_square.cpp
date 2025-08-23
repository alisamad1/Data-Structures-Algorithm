#include<iostream>
using namespace std;
int main(){
    int rows;
    int cols;
    int n;
    int m;
    cout << "Enter the number N: ";
    cin >> n;
    cout << "Enter the number M: ";
    cin >> m;
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}