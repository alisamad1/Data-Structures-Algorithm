// we will be writing the code for the problem finding the diameter of a binary Tree
#include<iostream>
#include<algorithm>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
int ans;
int depth(Node * root){
    if(root == NULL){
        return 0;
    }
    int left = depth(root->left);
    int right = depth(root->right);
    ans = max(ans, left + right);
    return max(left, right) + 1;
}
int diameterofbinaryTree(Node * root){
    ans = 0;
    depth(root);
    return ans;
}
int main(){
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout << "Diameter of the binary tree is: " << diameterofbinaryTree(root) << endl;
    return 0;
}