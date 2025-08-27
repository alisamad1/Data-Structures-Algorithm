#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
void traverseleft(Node * root, vector<int> & ans){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        return;
    }
    ans.push_back(root->data);
    if(root->left){
        traverseleft(root->left, ans);
    }
    else{
        traverseleft(root->right, ans);
    }
}
void traverseleaf(Node * root, vector<int>& ans){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        ans.push_back(root->data);
        return;
    }
    traverseleaf(root->left, ans);
    traverseleaf(root->right, ans);
    return;
}
void traverseright(Node * root, vector<int>& ans){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        return;
    }
    if(root->right){
        traverseright(root->right, ans);
    }
    else{
        traverseright(root->left, ans);
    }
    ans.push_back(root->data);
}
vector<int> boundarytreeTraversal(Node * root){
    vector<int> ans;
    if(root == NULL){
        return ans;
    }
    ans.push_back(root->data);
    traverseleft(root->left, ans);
    traverseleaf(root->left, ans);
    traverseleaf(root->right, ans);
    traverseright(root->right, ans);
    return ans;
}
int main(){
    // [1, 2, 3, 4, 5, 6, 7, N, N, 8, 9, N, N, N, N]
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);
    vector<int> ans = boundarytreeTraversal(root);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}