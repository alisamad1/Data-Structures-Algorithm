TreeNode* ans;
        void ok(TreeNode* original, TreeNode* closed,TreeNode* target){
            if(original == NULL){
                return;
            }
            if(original == target){
                ans = closed;
            }
            ok(original->left,closed->left,target);
            ok(original->right,closed->right,target); 
        }
        TreeNode* getTargetCopy(TreeNode* original,TreeNode* closed,TreeNode* target){
            ok(original,closed,target);
            return ans;
        }