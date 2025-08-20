// we will be writing the code for Construct Binary Search Tree from Preorder Traversal (Leetcode # 1008)
TreeNode* bstFromPreorder(vector<int>& preorder) {
    return build_tree(preorder, 0, preorder.size() -1);
}
TreeNode* build_tree(vector<int>& preorder, int l, int r){
    if(l>r){
        return nullptr;
    }
    TreeNode* root = new TreeNode(preorder[l]);
    if(l == r){
        return root;
    }
    int idx = l+1;
    while(idx <= r && preorder[idx] < preorder[l]){
        idx++;
    }
    root->left = build_tree(preorder,l+1,idx-1);
    root->right = build_tree(preorder,idx,r);
    return root;
}
