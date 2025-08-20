// Longest Subarray of 1's After Deleting One Element
// Approach #1
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int findMAx(vector<int>& nums, int skip_idx){
    int n = nums.size();
    int currLength = 0;
    int maxLength = 0;
    for(int i = 0; i<n; i++){
        if(i == skip_idx){
            continue;
        }
        if(nums[i] == 1){
            currLength++;
            maxLength = max(currLength,maxLength);
        }
        else{
            currLength = 0;
        }
    }
    return maxLength;
}
int longestSubarray(vector<int>& nums){
    int n = nums.size();
    int result = 0;
    int coutnZero = 0;
    for(int i = 0; i<n; i++){
        if(nums[i] == 0){
            coutnZero++;
            result = max(result, findMax(nums,i));
        }
    }
    return result;
}
int main(){
    vector<int> nums = {1,0,1,1};
    cout << "the longest subarray is "<< longestSubarray(nums)<<endl;
    return 0;
}
// Approach #2 -- Sliding Window Approach
int longestSubarray(vector<int>& nums){
    int n = nums.size();
    int left = 0;
    int right = 0;
    int maxLen = 0;
    int countZero = 0;
    while(right<n){
        if(nums[right] == 0){
            countZero++;
        }
        while(countZero > 1){
            if(nums[left] == 0){
                countZero--;
            }
            left++;
        }
        maxLen = max(maxLen,right-left);
        right++;
    }
    return maxLen;
}