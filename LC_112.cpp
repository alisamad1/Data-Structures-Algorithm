#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct TreeNode  {
    int val;
    TreeNode * right;
    TreeNode * left;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
bool exist = false;
void pathsum(TreeNode * root, int targetSum , int Sum){
    if(root == NULL){
        return;
    }
    Sum += root->val;
    if(Sum == targetSum && root->left == NULL && root->right == NULL){
        exist = true;
    }
    if(root->left != NULL){
        pathsum(root->left, targetSum, Sum);
    }
    if(root->right != NULL){
        pathsum(root->right, targetSum, Sum);
    }

}
bool hasPathSum(TreeNode * root, int targetSum){
    if(root == NULL){
        return false;
    }
    pathsum(root, targetSum, 0);
    return exist;
}
int main(){
    TreeNode * root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(4);
    root->right->right->right = new TreeNode(1);
    int targetSum ;
    cout << "Enter the targeted Sum you want in this tree : " ;
    cin >> targetSum;
    if(hasPathSum(root, targetSum)){
        cout << "Targeted Sum achieved in the tree ." << endl;
    }
    else{
        cout << "Targeted sum not achieved in the tree. " << endl;
    }
    cout << endl;
    return 0;
}