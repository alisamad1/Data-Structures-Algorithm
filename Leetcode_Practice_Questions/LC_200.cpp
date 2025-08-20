int numIslands(vector<vector<char>>& grid) {
    if (grid.empty()) return 0;
    int rows = grid.size();
    int cols = grid[0].size();
    vector<vector<bool>> visit(rows, vector<bool>(cols, false));
    int count = 0;
    vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    auto bfs = [&](int r, int c) {
        queue<pair<int, int>> q;
        q.push({r, c});
        visit[r][c] = true;
        while (!q.empty()) {
            auto [row, col] = q.front();
            q.pop();      
            for (auto [dr, dc] : directions) {
                int nr = row + dr, nc = col + dc;
                if (nr >= 0 && nr < rows && nc >= 0 && nc < cols &&
                    grid[nr][nc] == '1' && !visit[nr][nc]) {
                    q.push({nr, nc});
                    visit[nr][nc] = true;
                }
            }
        }
    };
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (grid[r][c] == '1' && !visit[r][c]) {
                bfs(r, c);
                count++;
            }
        }
    }
    return count;
}