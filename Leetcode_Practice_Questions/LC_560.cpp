int subarraySum(vector<int>& nums, int k) {
    if(nums.size() == 0){
        return 0;
    }
    int count = 0;
    unordered_map<int, int> map1;
    int curr_sum = 0;
    for(int n: nums){
        curr_sum += n;
        if(curr_sum == k){
            count += 1;
        }
        if(map1.find(curr_sum - k) != map1.end()){
            count += map1[curr_sum - k];
        }
        if(map1.find(curr_sum)!= map1.end()){
            map1[curr_sum] += 1;
        }
        else{
            map1[curr_sum] = 1;
        }
    }
    return count;
}