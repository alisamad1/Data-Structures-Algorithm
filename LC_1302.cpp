int deepestLeavesSum(TreeNode* root) {
    if(root->left == NULL && root->right==NULL) return root->val;
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);
    int sum = 0;
    int last_sum = 0;
    while(!q.empty()){
        TreeNode* x = q.front();
        q.pop();
        if(x==NULL){
            if(q.size() == 0){
                last_sum = sum;
                break;
            }
            q.push(NULL);
            sum = 0;
        }
        else{
            sum+= x->val;
            if(x->left!=NULL) q.push(x->left);
            if(x->right!=NULL) q.push(x->right);
        }
    }
    return last_sum;
}