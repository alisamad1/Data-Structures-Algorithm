#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
}; 
vector<int> postorderTraversal(TreeNode* root) {
    vector<int> result;
    stack<TreeNode*> st1, st2;

    if (!root) {
        return result;
    }

    st1.push(root);
    while (!st1.empty()) {
        TreeNode* curr = st1.top();
        st1.pop();
        st2.push(curr);
        if (curr->left) {
            st1.push(curr->left);
        }
        if (curr->right) {
            st1.push(curr->right);
        }
    }
    while (!st2.empty()) { 
        result.push_back(st2.top()->val);
        st2.pop();
    }
    return result;
}

TreeNode* buildsampleTree() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    return root;
}

int main() {
    TreeNode* root = buildsampleTree();
    vector<int> postorder = postorderTraversal(root);
    cout << "Post Order Traversal: ";
    for (int val : postorder) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
