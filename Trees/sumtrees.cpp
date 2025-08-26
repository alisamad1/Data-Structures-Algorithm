#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
pair<bool, int> solve(Node* root){
    if (!root) {
        return {true, 0};
    }
    if (!root->left && !root->right) {
        return {true, root->data};
    }
    auto L = solve(root->left);
    auto R = solve(root->right);
    if (L.first && R.first && L.second + R.second == root->data) {
        // The sum of the subtree rooted at this node is 2 * root's data
        return {true, 2 * root->data};
    }
    return {false, 0};
}
bool Sumtree(Node* root){
    return solve(root).first;
}
int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(5);
    root->left->right = new Node(5);
    root->right = new Node(30);
    cout << "The tree is a Sum Tree: " << boolalpha << Sumtree(root) << endl;
    return 0;
}
