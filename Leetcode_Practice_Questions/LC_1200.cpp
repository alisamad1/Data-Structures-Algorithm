// we will be writing the code for Minimum Absolute Difference (Leetcode #1200)
vector<vector<int>> minimumAbsDifference(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    int min_diff = INT_MAX;
    for(int i = 0; i<n-1; i++){
        min_diff = min(nums[i+1] - nums[i], min_diff);
    }
    for(int i = 0; i<n-1; i++){
        if((nums[i+1] - nums[i]) == min_diff){
            result.push_back({nums[i],nums[i+1]});
        }
    }
    return result;
}
