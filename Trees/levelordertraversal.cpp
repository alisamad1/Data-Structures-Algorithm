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
Node * buildlevelorderTraversal(Node * root){
    queue<Node * >q;
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);
    while(!q.empty()){
        Node * temp = q.front();
        q.pop();
        cout << "Enter the left child of " << temp->data << endl;
        int leftdata;
        cin >> leftdata;
        if(leftdata != -1){
            temp->left = new Node(leftdata);
            q.push(temp->left);
        }
        cout << "Enter the right child of " << temp->data << endl;
        int rightdata;
        cin >> rightdata;
        if(rightdata != -1){
            temp->right = new Node(rightdata);
            q.push(temp->right);
        }
    }
    return root;
}
int main(){
    Node * root = NULL;
    root = buildtree();
    cout << "Printing the Level order traversal: " << endl;
    levelorderTraversal(root);
    cout << "Building Level Order Traversal: " << endl;
    root = buildlevelorderTraversal(root);
    return 0;
}