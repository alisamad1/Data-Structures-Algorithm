#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
class Solution {
public:
    set<vector<int>> st;
    void solve(vector<int>& input, int target, vector<int>& current, int sum) {
        if (sum == target) {
            st.insert(current);
            return;
        }
        if (sum > target || input.empty()) {
            return;
        }
        int curr = input[0];
        // skipInput: skip current element
        vector<int> skipInput(input.begin() + 1, input.end());
        while (!skipInput.empty() && skipInput[0] == curr) {
            skipInput.erase(skipInput.begin());
        }
        solve(skipInput, target, current, sum);
        // takeInput: take current element
        vector<int> takeInput(input.begin() + 1, input.end());
        current.push_back(curr);
        solve(takeInput, target, current, sum + curr);
        current.pop_back(); // backtrack
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> current;
        solve(candidates, target, current, 0);
        return vector<vector<int>>(st.begin(), st.end());
    }
};
int main(){
    Solution sol;
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;
    vector<vector<int>> result = sol.combinationSum2(candidates, target);
    cout << "Combinations that sum to " << target << ":" << endl;
    for (const auto& combo : result) {
        cout << "[";
        for (size_t i = 0; i < combo.size(); ++i) {
            cout << combo[i];
            if (i < combo.size() - 1) {
                cout << ",";
            }
        }
        cout << "]" << endl;
    }
    return 0;
}
