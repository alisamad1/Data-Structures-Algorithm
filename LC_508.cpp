int maxi = -1 ;
    map<int,int>m;
    int dfs(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int total = dfs(root->left) + dfs(root->right) + root->val;
        maxi = max(maxi,++m[total]);
        return total;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        vector<int>abs;
        for(auto &i : m){
            if(i.second == maxi){
                abs.push_back(i.first);
            }
        }
        return abs;
    }