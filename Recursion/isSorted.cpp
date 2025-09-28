// we will be writing the recursive code for to check if the array is sorted or not
#include<iostream>
#include<vector>
#include<string>
using namespace  std;
bool isSorted(vector<int>& arr, int n){
    // base case
    if(n == 0 || n == 1){
        return true;
    }
    if(arr[n-1] < arr[n-2]){
        return false;
    }
    return isSorted(arr, n-1);
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    if(isSorted(arr,n)){
        cout << "The array is Sorted. " << endl;
    }
    else{
        cout << "The  array is not Sorted. " << endl;
    }
    return 0;
}