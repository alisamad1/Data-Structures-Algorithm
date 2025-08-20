//  Here we will be writing the code leetcode number 416 Partition Equal Subset Sum 
#include<iostream>
#include<vector>
using namespace std;
bool canPartition(vector<int>& nums){
    int total = 0;
    for(int n: nums){
        total += n;
    }
    if(total % 2 != 0){
        return false;
    }
    int target = total / 2;
    int n = nums.size();
    vector<bool> dp(target+1, false);
    dp[0] = true;
    for(int num : nums){
        for(int i = target ; i >= num; i--){
            dp[i] = dp[i] || dp[i-num];
        }
    } 
    return dp[target];
}
int main(){
    vector<int> nums = {1,2,3,5,5,4};
    cout << "The Parition of the equal subset sum is " << canPartition(nums) << endl;
    return 0;
}