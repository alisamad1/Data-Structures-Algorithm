// we wil be writing the code for linear search using recursion
#include<iostream>
using namespace std;
bool LinearSearch(int arr[],int n, int key){
    if(n == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        bool remainingpart = LinearSearch(arr + 1, n - 1, key);
        return remainingpart;
    }
}
int main(){
    int  arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    bool ans = LinearSearch(arr, n , key);
    if(ans){
        cout << "Element is present in the array" << endl;
    }
    else{
        cout  << "Element is not present in the array " << endl;
    }
    return 0;
}