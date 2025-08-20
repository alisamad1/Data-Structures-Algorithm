#include<iostream>
#include<vector>
#include<stack>
using namespace std;
struct TreeNode{
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int x) : val(x), left(nullptr) , right(nullptr) {}
};
vector<int> preorderTraversal(TreeNode* root){
    vector<int> result ;
    stack<TreeNode> st;
    if(root){
        st.push(root);
    }
    while(!st.empty()){
        TreeNode * curr = st.top();
        st.pop();
        result.push_back(curr->val);
        if(curr->right){
            st.push(curr->right);
        }
        if(curr->left){
            st.push(curr->left);
        }
    }
    return result;
}
int main(){ 
    TreeNode * root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> result = preorderTraversal(root);
    cout<<"Pre-Order Traversal: "<< endl;
    for(int val: result){
        cout << val << endl;
    }
    cout << endl;
    delete root->right->left;
    delete root->right;
    delete root;
    return 0;
}