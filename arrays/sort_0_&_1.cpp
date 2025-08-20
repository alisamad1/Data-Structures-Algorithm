#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std; 
int main(){
    vector<int> arr{0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 0};
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;
    while(start <= end){
        if(arr[i] == 0){
            swap(arr[i], arr[start]);
            start++;
            i++;
        }
        else{
            swap(arr[end], arr[i]);
            end--;
        }
    }
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
