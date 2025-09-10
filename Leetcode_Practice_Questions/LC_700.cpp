#include<iostream>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val): data(val), left(nullptr), right(nullptr){}
};
Node* insertBST(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insertBST(root->left, val);
    } else {
        root->right = insertBST(root->right, val);
    }
    return root;
}
Node* searchinBST(Node * root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    if(root->data > key){
        return searchinBST(root->left, key);
    }
    return searchinBST(root->right, key);
}
int main(){
    Node * root = NULL;
    root = insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 6);
    int key = 6;
    if(searchinBST(root, key) != NULL){
        cout << "The Element " << key << " is present in the BST" << endl;
    }
    else{
        cout << "The Element " << key << " is not present in the BST" << endl;
    }
    return 0;
}
