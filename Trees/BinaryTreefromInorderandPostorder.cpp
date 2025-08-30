#include<iostream>
#include<vector>
using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
int findposition(vector<int>& inorder, int element, int n) {
    for (int i = 0; i < n; i++) {
        if (inorder[i] == element) {
            return i;
        }
    }
    return -1;
}
Node* solve(vector<int>& inorder, vector<int>& postorder, int &index, int start, int end, int n) {
    if (start > end || index < 0) {
        return nullptr;
    }
    int element = postorder[index--];
    Node *root = new Node(element);
    int position = findposition(inorder, element, n);
    root->right = solve(inorder, postorder, index, position + 1, end, n);
    root->left = solve(inorder, postorder, index, start, position - 1, n);
    return root;
}
Node* buildtree(vector<int>& inorder, vector<int>& postorder) {
    int postorderIndex = postorder.size() - 1;
    int n = inorder.size();
    Node *ans = solve(inorder, postorder, postorderIndex, 0, n - 1, n);
    return ans;
}
void preorder(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> inorder(n);
    cout << "Enter the elements of Inorder Array: ";
    for (int i = 0; i < n; i++) {
        cin >> inorder[i];
    }
    int m;
    cout << "Enter the value of m: ";
    cin >> m;
    vector<int> postorder(m);
    cout << "Enter the elements of Postorder Array: ";
    for (int i = 0; i < m; i++) {
        cin >> postorder[i];
    }
    Node *result = buildtree(inorder, postorder);
    cout << "Preorder traversal of the constructed tree: ";
    preorder(result);
    cout << endl;
    return 0;
}
