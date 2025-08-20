#include<iostream>
#include<vector>
using namespace std;
void bubble_sort(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main(){
    vector<int> arr = {21,10,11,26,90,18,8,1};
    bubble_sort(arr);
    for(int num : arr){
        cout << num << " "; 
    }
    cout << endl;
    return 0;
}