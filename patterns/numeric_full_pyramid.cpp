#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the value of N: ";
    cin >> n;
    for(int row = 0; row <n; row = row+1){
        //spaces
        for(int col = 0; col <n- row -1; col++){
            cout<<" ";
        }
        //numbers
        for(int col = 0; col <= row; col++){
            cout<< row+ col +1 ;
        }
        //reverse counting
        int start = 2*row;
        for(int col = 0; col < row ; col++){
            cout<<start - col -1 ;
        }
        cout << endl;
    }
    //  for(int row = 0; row < n; row++){
    //     int start = row+1;
    //     for(int col = 0; col<row+1; col++){
    //         //cout << start << " ";
    //         cout << row + col + 1 << " ";
    //         start = start + 1;
    //     }
    //     cout << endl;
    //     return 0;
    //     }
     
}