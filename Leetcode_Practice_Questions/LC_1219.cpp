// we will be writing the code for Path with maximum Gold (Leetcode #1219)
int recursion(int i , int j, vector<vector<int> >&grid){
    if(i<0 || j<0 || i == grid.size() || j == grid[0].size() || grid[i][j] == 0){
        return 0;
    }

    int originalGold = grid[r][c];
    grid[r][c] = 0; // Mark as visited by taking the gold

    // Explore all 4 directions and find the path with the maximum gold
    int maxGoldFromNeighbors = 0;
    maxGoldFromNeighbors = max(maxGoldFromNeighbors, dfs(r + 1, c, grid));
    maxGoldFromNeighbors = max(maxGoldFromNeighbors, dfs(r - 1, c, grid));
    maxGoldFromNeighbors = max(maxGoldFromNeighbors, dfs(r, c + 1, grid));
    maxGoldFromNeighbors = max(maxGoldFromNeighbors, dfs(r, c - 1, grid));

    grid[r][c] = originalGold; // Backtrack: put the gold back for other paths
    return originalGold + maxGoldFromNeighbors;
}
int getMaximumGold(vector<vector<int>>& grid) {
    int ans = 0;
    for(int i = 0; i<grid.size(); i++){
        for(int j = 0; j<grid[0].size();j++){
            if(grid[i][j]!= 0){
                ans = max(ans, dfs(i, j, grid));
            }
        }
    }
    return ans;
}
