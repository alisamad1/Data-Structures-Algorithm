// we will be writing the code for Balanced Binary Tree (Leetcode #110)
bool isBalanced(TreeNode* root) {
    bool ans = true;
    checkBalance(root,ans);
    return ans;  
  }
  int checkBalance(TreeNode* root, bool &ans){
      if(root==NULL){
          return 0;
      }
      if(root->left == NULL && root->right== NULL){
          return 1;
      }
      int left = checkBalance(root->left,ans);
      int right = checkBalance(root->right,ans);
      if(abs(left - right)>1){
          ans = false;
      }
      return left>right ? left+1 : right + 1;
  }
