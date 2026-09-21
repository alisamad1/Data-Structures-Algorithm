#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& nums,int target, int n){
    unordered_map<int, int> hashmap;
    for(int i = 0; i < n; i++){
        int diff = target -nums[i];
        if(hashmap.find(diff) != hashmap.end()){
            return {hashmap[diff],i};
        }
        hashmap[nums[i]] = i; 
    }
    return {};
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int target;
    cout  << "Enter the target value: ";
    cin >> target;
    vector<int> result = twoSum(nums, target, n);
    if(!result.empty()){
        cout << "Indices are:" << result[0] << " and " << result[1] << endl;
    }
    else{
        cout << "No two sum solution found. " << endl;
    }
    return 0;
}