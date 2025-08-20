#include<iostream>
using namespace std;
bool target_found(int arr[][4], int rows, int cols, int target){
    for(int i = 0 ; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int target = 7;
    if(target_found(arr, 3,4, target)){
        cout << "Element found in the 2D array. " << endl;
    }
    else{
        cout << "Element not found in the 2D array " << endl;
    }
    return 0;
}