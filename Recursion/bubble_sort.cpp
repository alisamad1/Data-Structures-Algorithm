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
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sortarray(arr, n);
    for(int i = 0 ; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}