#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val) : data(val) , left(nullptr), right(nullptr){}
};
Node * LCAinBST(Node * root, Node * p , Node * q){
    if(root == NULL){
        return NULL;
    }
    if(root->data < p->data && root->data > q->data){
        return LCAinBST(root->right, p, q);
    }
    if(root->data > p->data && root->data < q->data){
        return LCAinBST(root->left, p, q);
    }
    return root;
}
// 3 5
// 2 1 3 -1 -1 -1 5 -1 -1
int main(){
    Node * root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(8);
    Node * p = root->left;
    Node * q = root->right;
    Node * ans  = LCAinBST(root, p, q);
    cout<<ans->data<<endl;
    return 0;
}