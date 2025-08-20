vector<int>original;
    vector<int>random;
    Solution(vector<int>& nums) {
        original = nums;
        random = nums;
    }
    vector<int> reset() {
        return original;   
    }
    vector<int> shuffle() {
     if(random.empty()){
        return random;
     }   
     int n = random.size();
     for(int i = n-1; i>0; i--){
        int j = rand() %(i+1);
        swap(random[i], random[j]);
     }
     return random;
    }