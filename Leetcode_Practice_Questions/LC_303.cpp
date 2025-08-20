NumArray(vector<int>& nums) {
    A.push_back(0);
    for(auto&x: nums){
        A.push_back(A.back()+x);
    }
}

int sumRange(int left, int right) {
    return A[right+1] - A[left];
}