#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int longestMountain(vector<int>& nums){
    int n = nums.size();
    if(n<3){
        return 0;
    }
    int longestMountain = 0;
    for(int i = 1; i< n-1; i++){
        if(nums[i] > nums[i-1] && nums[i] > nums[i+1]){
            int left = i-1;
            int right = i+1;
            while(left > 0 && nums[left -1] < nums[left]){
                left--;
            }
            while(right < n-1 && nums[right + 1] < nums[right]){
                right++;
            }
            longestMountain = max(longestMountain, right - left + 1);
        }
    }
    return longestMountain;
}
int main(){
    vector<int> nums = {2,1,4,7,3,2,5};
    cout<<"The longest element in the mountain in the array is "<<longestMountain(nums)<<endl;
    return 0;
}