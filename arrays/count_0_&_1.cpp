#include<iostream>
using namespace std;
int main(){
    int size;
    int arr[] = {0,0,0,0,1,0,1,0,0,1,1,0,1,0,0};
    int size = 15;
    int numZero = 0;
    int numOne = 0;
    for(int i = 0; i<size; i++){
        if(arr[i] == 0){
            numZero= numZero+1;
        }
        else if (arr[i] == 1){
            numOne = numOne + 1;
        }
    }
    cout<<"the total number of zeros in the array is: "<<numZero;
    cout<<"the total number of ones in the array is: "<<numOne;
    return 0;
}