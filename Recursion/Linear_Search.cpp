#include<iostream>
#include<vector>
using namespace std;
int linearsearch(vector<int>& nums, int index, int target){
    if(index >= nums.size()){
        return 0;
    }
    if(nums[index] == target){
        return 1;
    }
    return linearsearch(nums, index + 1, target);
}
int main(){
    int n;
    cout << "Enter the size of the array: " ;
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: " ;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int target;
    cout << "Enter the target element: ";
    cin >> target;
    int result = linearsearch(nums, 0, target);
    if(result == 1){
        cout << "Element found in the array." << endl;
    } 
    else{
        cout << "Element not found in the array." << endl;
    }
    return 0;
}