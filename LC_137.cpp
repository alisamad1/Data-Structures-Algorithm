int singleNumber(vector<int>& nums) {
    int ones = 0;
    int twos = 0;
    int threes = 0;
    for(int n: nums){
        twos = twos | (ones & n);
        ones = ones ^ n;
        threes = ones & twos;
        ones &= ~threes;
        twos &= ~threes;
    }
    return ones;
}