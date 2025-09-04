#include<iostream>
#include<vector>
#include<string>
using namespace std;
void heapify(vector<int> & arr, int n, int i){
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if(left < n && arr[left] < arr[smallest]){
        smallest = left;
    }
    if(right < n && arr[right] < arr[smallest]){
        smallest = right;
    }
    if(smallest != i){
        swap(arr[smallest], arr[i]);
        heapify(arr, n, smallest);
    }
    return;
}
vector<int> buildMinheap(vector<int> arr){
    int n = arr.size();
    for(int i = n / 2 ; i >= 0; i--){
        heapify(arr, n, i);
    }
    return arr;
}
int main(){
    vector<int> arr = {9,3,2,6,7};
    vector<int> minHeap = buildMinheap(arr);
    for(int i = 0; i < minHeap.size(); i++){
        cout << minHeap[i] << " ";
    }
    cout << endl;
    return 0;
}