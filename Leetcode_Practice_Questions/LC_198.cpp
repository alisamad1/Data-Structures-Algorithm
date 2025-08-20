int rob(vector<int>& nums) {
    int prev1 = 0;
    int prev2 = 0;
    int n = nums.size();
    if(n==0){
        return 0;
    }
    if(n==1){
        return nums[0];
    }
    for(int num: nums){
        int temp = prev1;
        prev1= max(prev2 + num , prev1);
        prev2 = temp;
    }
    return prev1;
}