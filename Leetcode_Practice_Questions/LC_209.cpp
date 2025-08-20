//Minimum Size Subarray Sum
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int minSubArraySum(int target,vector<int>&nums){
    int n = nums.size();
    int i = 0;
    int j = 0;
    int sum = 0;
    int minL = INT_MAX;
    while(j<n){
        sum+=nums[j];
        while(sum>=target){
            minL = min(minL,j-i+1);
            sum-=nums[i];
            i++;
        }
        j++;
    }
    return (minL == INT_MAX) ? 0 : minL;
}
int main(){
    vector<int> nums = {2,3,4,1,2,4,3};
    int target = 7;
    cout<<"Minimum Number of Elements that have the Subarray sum is "<<minSubArraySum(target,nums);
    return 0;
}