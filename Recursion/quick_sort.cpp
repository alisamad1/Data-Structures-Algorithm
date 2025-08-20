#include<iostream>
using namespace std;
int partition(int arr[],int start, int end){
    int pivot = arr[start];
    int count = 0;
    for(int i = start + 1; i <= end; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
    int i = start ;
    int j = end;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}
void quicksort(int arr[], int start, int end){
    if(start >= end){
        return;
    }
    int p = partition(arr,start, end);
    quicksort(arr, start, p-1);
    quicksort(arr, p+1, end);
}
int main(){
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr, 0, n-1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}