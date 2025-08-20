int findMaxLength(vector<int>& nums) {
    if(nums.size() <= 1){
        return 0;
    }
    unordered_map<int, int> cache;
    int count = nums[0] == 1? 1: -1;
    cache[0] = -1;
    cache[count] = 0;
    int maxi=0;
    for(int i = 1; i<nums.size();++i){
        count = (nums[i] == 1) ? count+1 : count - 1;
        if(cache.find(count) != cache.end()){
            maxi = max(maxi, i - cache[count]);
        }
        else{
            cache[count] = i;
        }
    }
    return maxi;
}