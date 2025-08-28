#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val) : data(val), left(nullptr), right(nullptr){}
};
Node * lca(Node * root, int n1, int n2){
    if(root == NULL){
        return root;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }
    Node * leftAns = lca(root->left, n1, n2);
    Node * rightAns = lca(root->right, n1, n2);
    if(leftAns != NULL && rightAns != NULL){
        return root;
    }
    else if(leftAns != NULL && rightAns == NULL){
        return  leftAns;
    }
    else if(leftAns == NULL && rightAns != NULL){
        return rightAns;
    }
    else {
        return NULL;
    }
}
int main(){
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    int n1 = 4;
    int n2 = 5;
    Node * ans = lca(root, n1, n2);
    cout << "The Lowest Common Ancestor of the tree is " << ans->data << endl;
    return 0;
}