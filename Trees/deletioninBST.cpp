#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int val): data(val), left(nullptr), right(nullptr) {}
};
int minival(Node *root) {
    Node *temp = root;
    while (temp->left != NULL) {
        temp = temp->left;
    }
    return temp->data;
}
int maxVal(Node *root) {
    Node *temp = root;
    while (temp->right != NULL) {
        temp = temp->right;
    }
    return temp->data;
}
// Delete a node from BST
Node* deletefromBST(Node *root, int key) {
    if (root == NULL) {
        return NULL;
    }
    if (root->data == key) {
        // 0 child
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        // 1 child (left)
        if (root->left != NULL && root->right == NULL) {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // 1 child (right)
        if (root->left == NULL && root->right != NULL) {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        // 2 children
        int mini = minival(root->right);
        root->data = mini;
        root->right = deletefromBST(root->right, mini);
        return root;
    }
    else if (root->data > key) {
        root->left = deletefromBST(root->left, key);
    }
    else {
        root->right = deletefromBST(root->right, key);
    }
    return root;
}
void inorder(Node *root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
Node* insertIntoBST(Node *root, int data) {
    if (root == NULL) {
        return new Node(data);
    }
    if (data > root->data) {
        root->right = insertIntoBST(root->right, data);
    }
    else {
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}
int main() {
    Node* root = NULL;
    cout << "Enter data to insert into BST (-1 to stop):" << endl;
    int data;
    while (cin >> data && data != -1) {
        root = insertIntoBST(root, data);
    }
    cout << "Inorder traversal of the BST: ";
    inorder(root);
    cout << endl;
    cout << "Enter the key to delete: ";
    int keyToDelete;
    cin >> keyToDelete;
    root = deletefromBST(root, keyToDelete);
    cout << "Inorder traversal after deletion: ";
    inorder(root);
    cout << endl;
    return 0;
}
