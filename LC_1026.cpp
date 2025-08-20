// we will be writing the code for maximum difference between Node and Ancestor (Leetcode #1026)
int maxi = 0;
    pair<int,int> ok(TreeNode* root){
        if(root == NULL) return {0,0};
        auto l = (root->left==NULL ? make_pair(0,0): ok(root->left));
        auto r = (root->right==NULL ? make_pair(0,0): ok(root->right));
        if(root->left == NULL && root->right==NULL) return {root->val,root->val};
        int curr_maxi = root->val;
        int curr_mini = root->val;
        if(root->left!= NULL){
            maxi = max({maxi,abs(root->val - l.first),abs(root->val - l.second)});
            curr_maxi = max(curr_maxi,l.second);
            curr_mini = min(curr_mini,l.first);
        }
        if(root->right!=NULL){
            maxi= max({maxi,abs(root->val - r.first), abs(root->val - r.second)});
            curr_maxi = max(curr_maxi,r.second);
            curr_mini = min(curr_mini,r.first);
        }
        return {curr_mini,curr_maxi};
    }
    int maxAncestorDiff(TreeNode* root) {
        ok(root);
        return maxi;        
    }
