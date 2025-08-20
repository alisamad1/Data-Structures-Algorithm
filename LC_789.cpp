bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
    int dist = abs(target[0]) + abs(target[1]);
    for(int i = 0; i<(int)ghosts.size();i++){
        int other = abs(target[0]-ghosts[i][0]) +abs(target[1] - ghosts[i][1]);
        if(other<=dist){
            return false;
        }
    }
    return true;
}