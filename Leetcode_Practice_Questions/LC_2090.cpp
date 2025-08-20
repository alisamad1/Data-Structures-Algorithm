// K Radius SubArray Averages
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>getAverages(vector<int>& nums, int k){
    int n = nums.size();
    if(k == 0){
        return nums;
    }
    vector<int> result(n,-1);
    if(n<2*k+1){
        return result;
    }
    long long window = 0;
    int left = 0;
    int right = 2*k;
    int i = k;
    for(int i = left; i <= right; i++){
        window += nums[i];
    }
    int count = 2*k+1;
    result[i] = window/count;
    while(right<n){
        int out_of_window = nums[left];
        int come_out_of_window = nums[right];
        window = window + come_out_of_window - out_of_window;
        result[i] = window/count;
        i++;
        right++;
        left++;
    }
    return result;
}
int main() {
    vector<int> nums = {1, 2, 1, 1, 3, 1, 2, 1, 1};
    int k = 2;
    vector<int> result = getAverages(nums, k);
    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}