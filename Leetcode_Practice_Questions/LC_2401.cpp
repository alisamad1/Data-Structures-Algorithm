#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int longestNiceSubarray(vector<int>& nums){
    int n = nums.size();
    int result = 0;
    for(int i = 0; i<n; i++){
        int mask = 0;
        for(int j = i; j<n; j++){
            if((mask & nums[j]) != 0){
                break;
            }
            result = max(result,j-i+1);
            mask = (mask |= nums[j]);
        }
    }
    return result;
}
int main(){
    vector<int> nums = {1,3,8,48,10};
    cout<<"The longest Subarray with the nicest number are "<<longestNiceSubarray(nums);
    return 0;
}