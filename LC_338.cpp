vector<int> countBits(int nums) {
    vector<int> dp(nums+1);
    dp[0]=0;
    for(int i=1; i<=nums; i++){
        int x=log2(i);
        dp[i]=1+dp[i-(1<<x)];
    }
    return dp;
}