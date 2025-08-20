// we will be writing code for Pascal's Triangle (Leetcode #118)
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    if (numRows == 0) return ans;

    // Using 0-based indexing for rows is more idiomatic in C++
    for (int i = 0; i < numRows; ++i) {
        // Each row `i` has `i+1` elements. Initialize with all 1s.
        vector<int> currentRow(i + 1, 1);
        // Calculate the intermediate elements based on the previous row.
        for (int j = 1; j < i; ++j) {
            currentRow[j] = ans[i - 1][j - 1] + ans[i - 1][j];
        }
        ans.push_back(currentRow);
    }
    return ans;
}
