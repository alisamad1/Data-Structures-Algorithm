#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node * left;
    Node * right;
    Node(int data) : data(data), left(NULL), right(NULL) {}
};
Node * buildtree(){
    int data;
    cout << "Enter the data: " << endl;
    cin >> data;
    if(data == -1){
        return NULL;
    }
    Node * root = new Node(data);
    cout << "Enter the left child of " << data << endl;
    root->left = buildtree();
    cout << "Enter the right child of " << data << endl;
    root->right = buildtree();
    return root;
}
void levelorderTraversal(Node * root){
    queue<Node * >q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node * temp = q.front();
        q.pop();
        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
void PostOrderTraversal(Node * root){
    if(root == NULL){
        return;
    }
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout << root->data << " ";
}

int main(){
    Node * root = NULL;
    root = buildtree();
    cout << "Printing the Level order traversal: " << endl;
    levelorderTraversal(root);
    cout << "Printing the Post Order Traversal: " << endl;
    PostOrderTraversal(root);
    return 0;
}