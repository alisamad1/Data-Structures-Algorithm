vector<int> inorderTraversal(TreeNode* root) {
    vector<int> x;
    inorder(root,x);
    return x;
}
void inorder(TreeNode* root, vector<int> &x){
    if(root==NULL){
        return;
    }
    inorder(root->left,x);
    x.push_back(root->val);
    inorder(root->right,x);
}