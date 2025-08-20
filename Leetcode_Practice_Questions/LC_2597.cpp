int result;
    int K;
    void solve(int idx, vector<int>& nums, unordered_map<int, int>&mp){
        if(idx >= nums.size()){
            result++;
            return;
        }
        solve(idx+1, nums,mp);
        if(!mp[nums[idx]-K] && !mp[nums[idx] +K]){
            mp[nums[idx]]++;
            solve(idx+1, nums, mp);
            mp[nums[idx]]--;
        }
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        result = 0;
        K = k ;
        unordered_map<int, int> mp;
        solve(0,nums,mp);
        return result -1;
    }