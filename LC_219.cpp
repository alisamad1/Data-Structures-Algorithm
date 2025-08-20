#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
bool containNearlyDuplicate(vector<int>& nums, int k){
    unordered_map<int,int> mp;
    for(int i = 0; i<nums.size(); i++){
        if(mp.find(nums[i]) != mp.end() && abs(mp[i]-i) >= k){
            return true;
        }
        else{
            mp[nums[i]] = i;
        }
    }
    return false;
}
int main(){
    vector<int> nums = {1,2,3,1};
    int k = 3;
    cout<<"the array containing duplicate element is:"<<containNearlyDuplicate(nums, k);
    return 0;
}