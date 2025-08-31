#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
#include <climits> 
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val) : data(val), left(nullptr), right(nullptr){}
};
bool isBSTValid(Node * root, long min , long max){
    if(root == NULL){
        return true;
    }
    if(root->data <= min || root->data >= max){ // Changed from isBST to isBSTValid
        return false;
    }
    return isBSTValid(root->left, min , root->data) && isBSTValid(root->right, root->data, max);
}
bool isValidBST(Node * root){
    return isBSTValid(root, LONG_MIN, LONG_MAX);
}
// [5,1,4,null,null,3,6]
int main(){
    Node * root = new Node(5);
    root->left = new Node(1);
    root->right = new Node(4);
    root->left->left = NULL;
    root->left->right = NULL;
    root->right->left = new Node(3);
    root->right->right = new Node(6);
    bool result = isValidBST(root);
    cout << "Is the BST valid : " << result << endl;
    return 0;
}