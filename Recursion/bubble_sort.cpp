#include<iostream>
using namespace std;
void sortarray(int *arr,int n){
    if( n == 0 || n == 1){
        return ;
    }
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            swap(arr[i], arr[i+1]);
        }
    }
    sortarray(arr, n - 1);
}
int main(){
    int arr[] = {1,2,4,5,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortarray(arr, n);
    for(int i = 0 ; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}