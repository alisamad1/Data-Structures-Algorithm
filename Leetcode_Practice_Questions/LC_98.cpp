#include<iostream>
#include<math.h>
#include<string>
#include<climits>
#include<cmath>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val) : data(val), left(NULL), right(NULL){}
};
bool BSTValid(Node * root, long min, long max){
    if(root == NULL){
        return true;
    }
    if(root->data >= min && root->data <= max){
        return false;
    }
    return BSTValid(root->left, min, root->data) && BSTValid(root->right, root->data, max);
}
bool isValidBST(Node * root){
    return BSTValid(root, LONG_MIN, LONG_MAX);
}
int main(){
    Node * root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(8);
    bool result = isValidBST(root);
    cout << "The BST is Valid Or Not: " << result << endl;
    return 0;
}