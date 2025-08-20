#include<iostream>
using namespace std;
int findMax(int arr[], int n) {  
    int max = arr[0];
    for(int i = 1; i < n; i++) {  
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
   
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "The maximum number in the array is: " << findMax(arr, n);
    return 0;
}
