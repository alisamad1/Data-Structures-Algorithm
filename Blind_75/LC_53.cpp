#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxSubArray(vector<int>& nums) {
    if(nums.size() == 0){
        return 0;
    }
    int sum_max = nums[0];
    int sum_including_current = nums[0];
    for(int i = 1; i<nums.size(); i++){
        int n = nums[i];
        sum_including_current = max(sum_including_current +n, n);
        sum_max = max(sum_max, sum_including_current);
    }
    return sum_max;
}
// [-2,1,-3,4,-1,2,1,-5,4]
int main(){
    int n;
    cout << "Enter the number of elements in the arraay : " ;
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the Elements of the array: " << endl;
    for(int i = 0; i < n; i++){
        cin >> nums[i] ;
    }
    cout << endl;
    int result = maxSubArray(nums);
    cout << "Maximum Subarray Sum : " << result << endl;
    return 0;
}