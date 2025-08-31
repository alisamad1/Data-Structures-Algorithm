#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val): data(val), left(nullptr) , right(nullptr){}
};
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
    return root; // Added return statement
}
Node * takeinput(Node * root){
    int data;
    cout << "Enter the data " ;
    cin >> data;
    while(data != -1){
        root = insertintoBST(root, data);
        cin >> data;
    }
    return root; // Added return statement
}
int main(){
    Node * root = nullptr;
    root = takeinput(root);
    levelorderTraversal(root);
    cout << endl;
    return 0;

}