// we will be implementing the code for the problem Longest Consecutive Sequence
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int longestconsecutivesequence(vector<int>& nums){
    unordered_map<int, bool> mp;
    for(int i = 0; i < nums.size(); i++){
        mp[nums[i]] = true;
    }
    for(int i = 0; i < nums.size(); i++){
        if(mp.find(nums[i] - 1)  != mp.end()){
            mp[nums[i]] = false;
        }
    }
    int maxLen = 0;
    for(int i = 0; i < nums.size(); i++){
        if(mp[nums[i]]){
            int j = 0;
            int count = 0;
            while(mp.count(nums[i] + j) > 0){
                count++;
                j++;
            }
            if(count > maxLen){
                maxLen = count;
            }
        }
    }
    return maxLen;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int result = longestconsecutivesequence(nums);
    cout << "The Length of the longest consecutive sequence is: " << result << endl;
    return 0;
}