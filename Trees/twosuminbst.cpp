#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val): data(val), left(nullptr), right(nullptr){}
};
void inorder(Node * root, vector<int> & inorderval){
    if(root == NULL){
        return;
    }
    inorder(root->left, inorderval);
    inorderval.push_back(root->data);
    inorder(root->right, inorderval);
}
bool twosuminbst(Node * root, int target){
    vector<int> inorderval;
    inorder(root, inorderval);
    int i = 0;
    int j = inorderval.size() - 1;
    while( i < j){
        int sum = inorderval[i] + inorderval[j];
        if(sum == target){
            return true;
        }
        else if(sum > target){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}
int main(){
    Node * root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(12);
    root->left->left = new Node(2);
    root->left->right = new Node(8);
    root->right->left = new Node(11);
    root->right->right = new Node(15);
    int target = 20;
    bool result = twosuminbst(root, target);
    if(result){
        cout << "The Required Sum is present in the BST" << endl;
    }
    else{
        cout << "The required sum is not present in the BST" << endl;
    }
    return 0;
}