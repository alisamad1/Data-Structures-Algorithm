// we wil be writing the code for Binary Tree Level Order Traversal (LeetCode #102)
vector<vector<int>> levelOrder(TreeNode* root) {
    if(root == nullptr){
        return vector<vector<int>>();
    }
    queue<TreeNode*>q;
    q.push(root);
    vector<vector<int>>result;
    while(!q.empty()){
        vector<int>level;
        int size = q.size();
        for(int i = 0; i < size; i++){
            TreeNode* Node = q.front();
            q.pop();
            level.push_back(Node->val);
            if(Node->left){
                q.push(Node->left);
            }
            if(Node->right){
                q.push(Node->right);
            }
        }
        result.push_back(level);
    }
    return result;
}
