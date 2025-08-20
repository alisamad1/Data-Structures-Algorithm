int dp[2005][25];
    int ok(vector<int>& nums,int& target, int total,int i){
        int n = nums.size();
        if(i==n && total == target){
            return 1;
        }
        else if(i == n && total!= target){
            return 0;
        }
        if(dp[total + 1000][i] != -1){
            return dp[total+1000][i];
        }
        int ans = ok(nums,target,total+nums[i],i+1) + ok(nums,target, total-nums[i],i+1);
        return dp[total+1000][i] = ans;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        memset(dp,-1,sizeof(dp));
        return ok(nums,target,0,0);
    }