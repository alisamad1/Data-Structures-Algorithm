#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val): data(val), left(NULL), right(NULL) {}
};
int solve(Node * root, int path){
    if(root == NULL){
        return 0;
    }
    path = path * 10 + root->data;
    if(root->left == NULL && root->right == NULL){
        return path;
    }
    return solve(root->left, path) + solve(root->right, path);

}
int sumNumbers(Node * root){
    return solve(root, 0);
}
int main(){
    Node * root = new Node(4);
    root->left = new Node(9);
    root->right = new Node(0);
    root->left->left = new Node(5);
    root->left->right = new Node(1);
    int result = sumNumbers(root);
    cout << "The sum of the numbers from root to leaf nodes is: " << result << endl;
    return 0;
}