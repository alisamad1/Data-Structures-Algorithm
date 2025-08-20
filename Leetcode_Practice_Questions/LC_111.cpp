// we will be writing the code for Minimum Depth of Binary Tree (Leetcode #111)
int minDepth(TreeNode* root) {
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 1;
    }
    int left = minDepth(root->left);
    int right = minDepth(root->right);
    if(left == 0){
        return right + 1;
    }
    if(right == 0){
        return left + 1;
    }
    return left<right ? left + 1: right+1;
}
