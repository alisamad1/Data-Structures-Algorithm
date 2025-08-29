#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val): data(val), left(nullptr), right(nullptr){}
};
pair<int, int> find(Node * root){
    if(!root){
        return {0, 0};
    }
    pair<int, int> left = find(root->left);
    pair<int, int> right = find(root->right);
    int include = root->data + left.second + right.second;
    int exclude = max(left.first , left.second) + max(right.first, right.second);
    return {include, exclude};
}
int getMaxSum(Node * root){
    pair<int, int> p = find(root);
    return max(p.first, p.second);
}
int main(){
    Node * root = new Node(11);
    root->left = new Node(1);
    root->right = new Node(2);
    int result = getMaxSum(root);
    cout << "The maximum sum of adjacent nodes in a Binary Tree is " << result << endl;
    return 0;
}