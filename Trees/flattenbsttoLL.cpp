#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val): left(nullptr), right(nullptr) {}
};
void inorder(Node * root, vector<int>& inorderval){
    if(root == NULL){
        return;
    }
    inorder(root->left , inorderval);
    inorderval.push_back(root->data);
    inorder(root->right, inorderval);
}
Node * flatten(Node * root){
    vector<int> inorderval;
    inorder(root, inorderval);
    int n = inorderval.size();
    Node * newRoot = new Node(inorderval[0]);
    Node * curr = newRoot;
    for(int i = 1; i < n; i++){
        Node * temp = new Node(inorderval[i]);
        curr->left = NULL;
        curr->right = temp;
        curr = temp;
    }
    curr->left = NULL;
    curr->right = NULL;
    return newRoot;
}
// 10 6 12 2 8 11 15
int main(){
    Node * root = new Node(10);
    root->left = new Node(6);
    root->right = new Node(12);
    root->left->left = new Node(2);
    root->left->right = new Node(8);
    root->right->left = new Node(11);
    root->right->right = new Node(15);
    Node * newRoot = flatten(root);
    while(newRoot != NULL){
        cout << newRoot->data << " ";
        newRoot = newRoot->right;
    }
    cout << endl;
    return 0;
}