int jump(vector<int>& nums) {
    int n = nums.size();
    if(n==1){
        return 0;
    }
    int ans  = 1;
    int maxi_reach = nums[0];
    int curr = nums[0];
    int i = 1;
    while(maxi_reach<n-1){
        if(i+nums[i] > curr){
            curr=i+nums[i];
        }
        if(i==maxi_reach){
            maxi_reach = curr;
            ans++;
        }
        i++;
    }
    return ans;
}