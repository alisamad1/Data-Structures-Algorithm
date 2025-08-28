#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val) : data(val), left(nullptr),right(nullptr) {}
};
void solve(Node * root, int k , int & count, vector<int> path){
    if(root == NULL){
        return;
    }
    path.push_back(root->data);
    solve(root->left, k, count, path);
    solve(root->right, k, count, path);
    int size = path.size();
    int sum = 0;
    for(int i = size - 1; i >= 0; i--){
        sum += path[i];
        if(sum == k){
            count++;
        }
    }
    path.pop_back();
}
int sum(Node* root, int k){
    vector<int> path;
    int count = 0;
    solve(root, k, count , path);
    return count;
}
int main(){
    Node * root = new Node(8);
    root->left = new Node(4);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(2);
    root->left->left->left = new Node(3);
    root->left->left->right = new Node(-2);
    root->left->right->right = new Node(1);
    root->right = new Node(5);
    root->right->right = new Node(2);
    int k ;
    cout << "Enter the value of k: " ;
    cin >> k;
    int result = sum(root, k);
    cout << "The K sum Paths of the Tree is " << result << endl;
    return 0;
}