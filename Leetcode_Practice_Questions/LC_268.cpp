#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int missingnumber(vector<int>& nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    for(int i = 0; i<n; i++){
        if(i != nums[i]){
            return (nums[i] - 1);
        }
        if( nums[i] == n-1){
            return (nums[i] + 1);
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    cout<<missingnumber(nums)<<endl;
    return 0;
}