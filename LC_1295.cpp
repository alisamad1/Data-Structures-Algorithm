int findNumbers(vector<int>& nums) {
    int count = 0;
    for(int num: nums){
        count += int(floor(log10(num)+1)) % 2 == 0;
    }
    return count;
}