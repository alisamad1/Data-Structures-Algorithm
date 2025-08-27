#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val) : data(val), left(nullptr), right(nullptr){}
};
void solve(Node * root, vector<int> & ans , int level){
    if(root == NULL){
        return;
    }
    if(level == ans.size()){
        ans.push_back(root->data);
    }
    solve(root->right, ans, level + 1);
    solve(root->left, ans , level + 1);
}
vector<int> rightview(Node * root){
    vector<int> ans;
    solve(root, ans , 0);
    return ans;
}
int main(){
    //[1, 2, 3,null, null, 4, 5]
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(5);
    vector<int> ans = rightview(root);
    for(auto i : ans){
        cout << i << " ";
    }
    cout << endl;
    return  0;
}