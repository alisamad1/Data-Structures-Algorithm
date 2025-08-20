#include<iostream>
#include<vector>
using namespace std;
void insertion_sort(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        int temp = arr[i];
        int j = i - 1;
        for(j ; j >= 0; j--){
            if(arr[j] > arr[j+1]){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}
int main(){
    vector<int> arr = {8,1,10,21,26,11,90,18};
    insertion_sort(arr);
    for(int num : arr){
        cout << num << " ";
    }
    cout<<endl;
    return 0;
}