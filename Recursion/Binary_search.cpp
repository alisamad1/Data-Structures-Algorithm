#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>& nums, int left, int right, int target){
    if(left > right){
        return 0;
    }
    int mid = left + (right - left) / 2;
    if(nums[mid] == target){
        return 1;
    }
    if(nums[mid] < target){
        return binarysearch(nums, mid + 1, right, target);
    }
    if(nums[mid] > target){
        return binarysearch(nums, left, mid - 1, target);
    }
    return 0;
}
int main(){
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int target;
    cout << "Enter the target element: " << endl;
    cin >> target;
    int result = binarysearch(nums, 0, n - 1, target);
    if(result == 1){
        cout << "Element found in the array" << endl;
    }
    else{
        cout << "Element not found in the array" << endl;
    }
    return 0;
}