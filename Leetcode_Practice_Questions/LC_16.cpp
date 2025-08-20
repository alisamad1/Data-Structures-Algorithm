int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    int closestSum = nums[0] + nums[1] + nums[2];
    int minDiff = INT_MAX;
    for(int i = 0; i<nums.size()-2; i++){
        if(i>0 && nums[i] == nums[i-1]){
            continue;
        }
        int left = i+1; 
        int right = nums.size() - 1;
        while(left<right){
            int currentSum = nums[i] + nums[left] + nums[right];
            if(currentSum == target){
                return currentSum;
            } 
            int diff = abs(currentSum - target);
            if(diff < minDiff){
                minDiff = diff;
                closestSum = currentSum;
            }
            if(currentSum < target){
                left++;
            }
            else{
                right--;
            }
        }
    }
    return closestSum;
}