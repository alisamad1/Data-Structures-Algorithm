int minMoves2(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n = nums.size();
    int median = nums[n/2];
    int total = 0;
    for(int num: nums){
        total += abs(num - median);
    }
    return total;
}
