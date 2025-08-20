#include<iostream>
using namespace std;
bool BinarySearch(int arr[],int start, int end, int key){
    if(start > end){
        return false;
    }
    int mid = start + (end - start) / 2;
    if(arr[mid] == key){
        return true;
    }
    if(arr[mid] < key){
        return BinarySearch(arr, mid + 1, end, key);
    }
    else{
        return BinarySearch(arr, start , mid - 1, key);
    }
    return false;
}
int main(){
    int arr[] = {3,5,1,2,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 6;
    bool ans = BinarySearch(arr, 0, n - 1, key);
    if(ans){
        cout << "Element is present in the array " << endl;
    }
    else{
        cout << "Element is not present in the array " << endl;
    }
    return 0;
}