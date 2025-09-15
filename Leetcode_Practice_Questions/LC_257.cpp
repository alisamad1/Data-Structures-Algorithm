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
void solve(Node * root, vector<string> & ans, string path){
    if(root == NULL){
        return;
    }
    path += to_string(root->data);
    if(root->left){
        solve(root->left, ans , path + "->");
    }
    if(root->right){
        solve(root->right, ans, path + "->");
    }
    if(root->left == NULL && root->right == NULL){
        ans.push_back(path);
    }
    return;
}
vector<string> binaryTreePaths(Node * root){
    vector<string> ans;
    if(root){
        solve(root, ans, "");
    }
    return ans;
}
int main(){
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    vector<string> result = binaryTreePaths(root);
    for(auto i : result){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}