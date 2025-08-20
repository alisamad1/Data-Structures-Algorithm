#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxProduct(vector<int>& nums){
    if(nums.empty()) return 0;
    int max_prod = nums[0];
    int min_prod = nums[0];
    int result = nums[0];
    int n = nums.size();
    for(int i = 1; i < n; i++){
        int temp = max_prod;
        max_prod = max({nums[i], max_prod * nums[i], min_prod * nums[i]});
        min_prod = min({nums[i], temp * nums[i], min_prod * nums[i]});
        result = max(result, max_prod);
    }
    return result;
}
int main(){
    vector<int> nums  = {3,7,12,13,-1};
    cout << "The Required Maximum Product Subarray Sum is " << maxProduct(nums) << endl;
    return 0;
}
