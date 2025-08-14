#include<iostream>
#include<algorithm>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
Node * lowestcommonancestor(Node * root, Node * p, Node * q){
    // Function to find the lowest common ancestor of two nodes in a binary tree
    if(root == nullptr  || root == p || root == q){
        return root;
    }
    Node*  left = lowestcommonancestor(root->left, p, q);
    Node*  right = lowestcommonancestor(root->right, p, q);
    if(left && right){
        return root;
    }
    return left ? left : right;
}
int main(){
    Node * root = new Node(3);
    root->left = new Node(5);
    root->right = new Node(1);
    root->left->left = new Node(6);
    root->left->right = new Node(2);
    root->right->left = new Node(0);
    root->right->right = new Node(8);
    root->left->left->left = nullptr;
    root->left->left->right = nullptr;
    root->left->right->left = new Node(7);
    root->left->right->right = new Node(4);
    root->right->left->left = nullptr;
    root->right->left->right = nullptr;
    root->right->right->left = nullptr;
    root->right->right->right = nullptr;
    Node * p = root->left;
    Node * q = root->right;
    Node * lca = lowestcommonancestor(root, p, q);
    if(lca){
        cout << "Lowest common ancestor of " << p->data << " and " << q->data << " is " << lca->data << endl;
    }
    else{
        cout << "No common ancestor found in the tree. " << endl;
    }
    return 0;
}