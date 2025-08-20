// we will be writing the code for two sum (Leetcode #1)
vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    unordered_map<int,int> hashmap;
    for(int i = 0; i<n;i++){
        int diff = target - nums[i];
        if(hashmap.find(diff) != hashmap.end()){
            return {hashmap[diff],i};
        }
        hashmap[nums[i]] = i;
    }
    return{};
}
