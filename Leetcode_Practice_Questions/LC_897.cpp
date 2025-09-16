#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val): data(val), left(NULL), right(NULL){}
};
// Increasing Order Search tree
void inorder(Node * root, vector<int> & result){
    if(root == NULL){
        return;
    }
    inorder(root->left, result);
    result.push_back(root->data);
    inorder(root->right, result);
}
Node * IncreasingorderSearchTree(Node * root){
    vector<int> result;
    inorder(root, result);
    Node * dummy = new Node(-1);
    Node * curr = dummy;
    for(auto it : result){
        curr->right = new Node(it);
        curr = curr->right;
    }
    return dummy->right;
}
int main(){
    Node * root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(6);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->right->right = new Node(8);
    root->left->left->left = new Node(1);
    root->left->right->left = new Node(3);
    root->left->right->right = new Node(7);
    Node * ans = IncreasingorderSearchTree(root);
    while(ans != NULL){
        cout << ans->data << "->";
        ans = ans->right;
    }
    cout << endl;
    return 0;
}