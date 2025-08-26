#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Node {
    int data;
    Node * left;
    Node * right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
bool symmetricTree(Node * root1, Node * root2){
    if(!root1 && !root2){
        return true;
    }
    if(!root1 || !root2){
        return false;
    }
    if(root1->data != root2->data){
        return false;
    }
    return  symmetricTree(root1->left, root2->right)  &&
            symmetricTree(root1->right, root2->left);
}
int main() {
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    if (symmetricTree(root1, root2)) {
        cout << "The trees are identical." << endl;
    } else {
        cout << "The trees are not identical." << endl;
    }
    root2->right->data = 4;
    if (symmetricTree(root1, root2)) {
        cout << "The trees are identical." << endl;
    } else {
        cout << "The trees are not identical." << endl;
    }

    return 0;
}