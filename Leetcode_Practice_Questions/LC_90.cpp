#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(int ind, vector<int>& temp, vector<int>& nums, vector<vector<int>>& ans) {
    int n = nums.size();
    if (ind == n) {
        ans.push_back(temp);
        return;
    }
    temp.push_back(nums[ind]);
    solve(ind + 1, temp, nums, ans);
    temp.pop_back();
    int nextIdx = ind;
    while (nextIdx < nums.size() && nums[nextIdx] == nums[ind]) {
        nextIdx++;
    }
    solve(nextIdx, temp , nums, ans);
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> temp;
    sort(nums.begin(), nums.end());
    solve(0, temp, nums, ans);
    return ans;
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<vector<int>> result = subsetsWithDup(nums);
    cout << "Unique subsets:\n";
    for (const auto& subset : result) {
        cout << "[";
        for (int i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i != subset.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }
    return 0;
}
