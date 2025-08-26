#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val) : data(val), left(nullptr), right(nullptr){}
};
int height(Node * root){
    if(root == NULL){
        return 0;
    }
    int left1 = height(root->left);
    int right1 = height(root->right);
    int ans = max(left1, right1) + 1;
    return ans;
}
bool isBalancedTree(Node * root){
    if(root == NULL){
        return true;
    }
    bool left = isBalancedTree(root->left);
    bool right = isBalancedTree(root->right);
    int diff = abs(height(root->left) - height(root->right));
    if(left && right && diff <= 1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    Node * root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout << "The treee is balanced or not is " << isBalancedTree(root) << endl;
    return 0;
}