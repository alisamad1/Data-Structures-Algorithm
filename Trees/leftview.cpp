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
void solve(Node * root, vector<int>& ans, int level){
    if(root == NULL){
        return ;
    }
    if(level == ans.size()){
        ans.push_back(root->data);
    }
    solve(root->left, ans , level + 1);
    solve(root->right, ans , level + 1);
}
vector<int> leftview(Node * root){
    vector<int> ans;
    solve(root, ans, 0);
    return ans;
}
int main(){
    // 
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    vector<int> result = leftview(root);
    for(auto i : result){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}