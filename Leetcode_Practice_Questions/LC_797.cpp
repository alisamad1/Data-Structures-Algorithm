#include<iostream>
#include<vector>

using namespace std;
void findallpaths(vector<vector<int>>& graph, int currNode , vector<bool>& visited, int n, vector<int>& currPath, vector<vector<int>>& res){
    if(currNode == n - 1){
        res.push_back(currPath);
        return;
    }
    if(visited[currNode] == true){
        return;
    }
    visited[currNode] = true;
    for(auto neighbour : graph[currNode]){
        currPath.push_back(neighbour);
        findallpaths(graph, neighbour, visited, n , currPath, res);
        currPath.pop_back();
    }
    visited[currNode] = false;
}
vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    vector<vector<int>> res;
    vector<int> currPath;
    int n = graph.size();
    vector<bool>visited(n);
    currPath.push_back(0);
    findallpaths(graph, 0, visited, n , currPath, res);
    return res; 
}
int main() {
    Solution sol;
    vector<vector<int>> graph = {
        {1, 2},   
        {3},      
        {3},     
        {}        
    };
    vector<vector<int>> result = sol.allPathsSourceTarget(graph);
    cout << "All paths from source to target:\n";
    for (auto& path : result) {
        for (int node : path) {
            cout << node << " ";
        }
        cout << endl;
    }
    return 0;
}