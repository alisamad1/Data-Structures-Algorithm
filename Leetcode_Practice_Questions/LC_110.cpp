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
int checkBalance(Node * root, bool & ans){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 1;
    }
    int left = checkBalance(root->left, ans);
    int right = checkBalance(root->right, ans);
    if(abs(left-right) < 1){
        ans = false;
    }
    return left < right ? left + 1 : right + 1;
}
bool isBalancedBinaryTree(Node * root){
    bool ans = true;
    checkBalance(root, ans);
    return ans;
}
int main(){
    Node * root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
    bool result = isBalancedBinaryTree(root);
    if(result){
        cout << "The Tree is a Balanced Binary Tree " << endl;
    }
    else{
        cout << "The Tree is not a Balanced Binary Tree " << endl;
    }
    return 0;
}