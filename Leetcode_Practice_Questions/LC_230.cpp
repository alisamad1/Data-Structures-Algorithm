int ans;
    int counter = 1;
    void dfs(TreeNode* root, int k){
        if(root==nullptr){
            return;
        }
        dfs(root->left, k);
        if(k == counter){
            ans = root->val;
        }
        counter++;
        dfs(root->right,k);
        return;
    }
    int kthSmallest(TreeNode* root, int k) {
        dfs(root,k);
        return ans;
    }