#include<iostream>
#include<vector>
using namespace std;
void selection_sort(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main(){
    vector<int> arr = {9,6,2,10,4,5,7,1};
    selection_sort(arr);
    for(int num: arr){
        cout << num << " ";
    }
    cout<<endl;
    return 0;
}