#include<iostream>
using namespace std;
int getsum(int *arr, int n){
    if(n==0){
        return 0;        
    }
    if(n==1){
        return arr[0];
    }
    int remainingpart = getsum(arr + 1, n - 1);
    int sum = arr[0] + remainingpart;
    return sum;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = getsum(arr, n);
    cout << "The sum of the array is: " << sum << endl;
    return 0;
}