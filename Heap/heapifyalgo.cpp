#include<iostream>
#include<vector>
using namespace std;
void heapify(vector<int> &arr, int n, int i){
    int largest = i;
    int left = 2 * i ;
    int right = 2 * i + 1;
    if(left < n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right < n && arr[largest] < arr[right]){
        largest = right;
    }
    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr,n, largest);
    }
    return;
}
int main(){
    int n;
    cout << "Enter the value of N: " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i] ;
    } 
    for(int i = n / 2; i >= 0; i--){
        heapify(arr, n, i);
    }
    cout << "Printing the array now: " << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}