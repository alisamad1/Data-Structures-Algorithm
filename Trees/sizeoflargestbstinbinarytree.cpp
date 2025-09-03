#include <iostream>
#include <vector>
#include <climits>
using namespace std;
struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};
class info {
public:
    int maxi;
    int mini;
    bool isBST;
    int size;
};
info solve(TreeNode* root, int &ans) { 
    if (root == NULL) {
        return {INT_MIN, INT_MAX, true, 0};
    }
    info left = solve(root->left, ans);
    info right = solve(root->right, ans);
    info currNode;
    currNode.size = left.size + right.size + 1;
    currNode.maxi = max(root->data, right.maxi);
    currNode.mini = min(root->data, left.mini);
    if (left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini)) {
        currNode.isBST = true;
    } else {
        currNode.isBST = false;
    }
    if (currNode.isBST) {
        ans = max(ans, currNode.size);
    }
    return currNode;
}
int largestBST(TreeNode* root) { 
    int maxsize = 0;
    info temp = solve(root, maxsize);
    return maxsize;
}
int main() {
    // Example 1: Not the whole tree is a BST
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(8); 
    root->right->left = new TreeNode(12);
    root->right->right = new TreeNode(17);
    cout << "Largest BST size in tree: " << largestBST(root) << endl;
    // Example 2: Uncomment to test a full BST
    /*
    TreeNode* root2 = new TreeNode(50);
    root2->left = new TreeNode(30);
    root2->right = new TreeNode(60);
    root2->left->left = new TreeNode(5);
    root2->left->right = new TreeNode(35);
    root2->right->left = new TreeNode(55);
    root2->right->right = new TreeNode(70);

    cout << "Largest BST size in tree2: " << largestBST(root2) << endl;
    */
    return 0;
}
