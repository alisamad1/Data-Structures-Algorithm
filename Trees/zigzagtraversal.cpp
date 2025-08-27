#include<iostream>
#include<vector>
#include<queue>
#include<string>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val): data(val), left(NULL), right(NULL) {}
};
vector<int> zigzagtraversal(Node * root){
    vector<int> result;
    if(root == NULL){
        return result;
    }
    bool lefttoright = true;
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            Node * frontNode = q.front();
            q.pop();
            int index = lefttoright ? i : n - i - 1;
            ans[index] = frontNode->data;
            if(frontNode->left){
                q.push(frontNode->left);
            }
            if(frontNode->right){
                q.push(frontNode->right);
            }
        }
        lefttoright = !lefttoright;
        for(auto i : ans){
            result.push_back(i);
        }
    }
    return result;
}
/*
[1, 2, 3, 4, 5, 6, 7]
*/
int main(){
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    vector<int> result = zigzagtraversal(root);
    for(auto i : result){
        cout << i << " " ;
    }
    cout << endl;
    return 0;
}