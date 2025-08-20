#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int threeSumClosest(vector<int>& nums, int target){
    sort(nums.begin(),nums.end());
    int closestSum = nums[0] + nums[1] + nums[2];
    for(int i = 0; i<nums.size() - 2; i++){
        int left = i+1;
        int right = nums.size()-1;
        while(left<right){
            int currentSum = nums[i] + nums[left] + nums[right];
            if(abs(target - currentSum) < abs(target - closestSum)){
                closestSum = currentSum;
            }
            if(target < currentSum){
                left++;
            }
            if(target > currentSum){
                right--;
            }
        }
    }
    return closestSum;
}
int main(){
    vector<int> nums = {0,0,0};
    int target = 1;
    cout<<threeSumClosest(nums,target)<<endl;
    return 0;
}