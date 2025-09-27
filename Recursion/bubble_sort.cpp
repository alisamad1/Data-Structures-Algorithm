#include<iostream>
#include<vector>
using namespace std;
void bubble_Sort(vector<int>& nums, int n){
    if(n == 0 || n == 1){
        return;
    }
    for(int i = 0; i < n - 1; i++){
        if(nums[i] > nums[i+1]){
            swap(nums[i], nums[i+1]);
        }
    }
    bubble_Sort(nums,n - 1);
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: " ;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    bubble_Sort(nums, n);
    cout << "The sorted array is: " ;
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    return 0;
}