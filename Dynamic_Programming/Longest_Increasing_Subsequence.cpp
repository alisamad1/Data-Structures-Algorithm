#include<iostream>
#include<vector>
#include<string>
#include<algorithm> 
using namespace std;
int LongestIncreasingSubsequence(vector<int>& nums, int n){
    vector<int> nums2(n, 1);
    for(int i = 0; i < n; i++){
        nums2[i] = 1;
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(nums[i] > nums[j] && nums2[i] < nums2[j] + 1){
                nums2[i] = nums2[j] + 1;
            }
        }
    }
    return *max_element(nums2.begin(), nums2.end());
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){ // Changed 'n' to 'nums[i]' to read elements into the vector
        cin >> nums[i];
    }
    int result = LongestIncreasingSubsequence(nums, n);
    cout << "The length of the longest Increasing Subsequence is : " << result << endl;
    return 0;
}