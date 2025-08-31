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
bool searchinBST(Node * root, int key){
    if(root == NULL){
        return false;
    }
    if(root->data == key){
        return true;
    }
    if(root->data > key){
        return searchinBST(root->left, key);
    }
    if(root->data < key){
        return searchinBST(root->right, key);
    }
}
Node * insertinBST(Node * root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(root->data > val){
        root->left = insertinBST(root->left, val);
        return root;
    }
    else{
        root->right = insertinBST(root->right, val);
        return root;
    }
    return root;
}
int main(){
    Node * root = NULL;
    root = insertinBST(root, 5);
    insertinBST(root, 1);
    insertinBST(root, 3);
    insertinBST(root, 4);
    insertinBST(root, 2);
    cout << searchinBST(root, 2) << endl;
    cout << searchinBST(root, 10) << endl;
    insertinBST(root, 7);
    return 0;
}