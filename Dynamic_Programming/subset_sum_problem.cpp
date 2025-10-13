#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool subsetsum(vector<int>& nums,int target, int n){
    vector<bool> dp(target + 1);
    for(int i = 0; i <= target; i++){
        dp[i] = false;
    }
    dp[0] = true; 
    for(int i = 0; i < n; i++){ 
        for(int j = target; j >= nums[i]; j--){ 
            if(dp[j - nums[i]]){
                dp[j] = true;
            }
        }
    }
    return dp[target];
}
int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int target;
    cout << "Enter the target sum: ";
    cin >> target;
    bool result = subsetsum(nums, target, n);
    if(result){
        cout << "The desired subset sum is  present in the array. " << endl;
    }
    else{
        cout << "The desired subset sum is not present in the array."  << endl;
    }
    return 0;
}