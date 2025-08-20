//count subarray of length three with a condition
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int countSubarrays(vector<int>& nums){
    int n = nums.size();
    int result = 0;
    for(int i = 1; i<n-1; i++){
        if(nums[i] == (nums[i-1] + nums[i+1]) * 2){
            result++;
        }
    }
    return result;
}
int main(){
    vector<int> nums = {1,2,1,4,1};
    int conclusion = countSubarrays(nums);
    cout << "The concluded vector from the subarray is "<< conclusion;
    return 0;
}