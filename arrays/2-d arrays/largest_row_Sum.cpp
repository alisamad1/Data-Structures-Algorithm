#include<iostream>
using namespace std;
#include<limits.h>
int largestRowSum(int arr[][3], int rows, int cols){
    int maximum = INT_MIN;
    for(int i = 0; i < rows; i++){
        int sum = 0;
        for(int j = 0 ; j < cols; j++){
            sum += arr[i][j];
        }
        if(sum > maximum){
            maximum = sum;
            return maximum;
        }
    }   
}
int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int rows = 3;
    int cols = 3;
    cout << "The largest row sum is " << largestRowSum(arr,rows,cols);
    return 0;
}