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

Node * minimumValue(Node * root){
    Node * temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}
Node * maximumValue(Node * root){
    Node * temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}
Node * insertintoBST(Node * root, int data){
    if(root == nullptr){
        root = new Node(data);
        return root;
    }
    if(data > root->data){
        root->right = insertintoBST(root->right, data);
    }
    else{
        root->left = insertintoBST(root->left, data);
    }
    return root; 
}
Node * takeinput(Node * root){
    int data;
    cout << "Enter the data " ;
    cin >> data;
    while(data != -1){
        root = insertintoBST(root, data);
        cin >> data;
    }
    return root; 
}
int main(){
    Node * root = nullptr;
    root = takeinput(root);
    cout << "Minimum value in BST: " << minimumValue(root)->data << endl;
    cout << "Maximum value in BST: " << maximumValue(root)->data << endl;
    return 0;
}