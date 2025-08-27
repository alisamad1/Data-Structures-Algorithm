#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<algorithm>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val) : data(val), left(nullptr), right(nullptr){}
};
int sumofleftnodes(Node * root){
    if(!root){
        return 0;
    }
    queue<pair<Node*, bool>> q;
    q.push(make_pair(root, false));
    int sum = 0;
    while (!q.empty()) {
        pair<Node*, bool> front = q.front();
        Node* node = front.first;
        bool isLeft = front.second;
        q.pop();
        if (isLeft && !node->left && !node->right) { 
            sum += node->data;
        }
        if (node->left) {
            q.push(make_pair(node->left, true));
        }
        if (node->right) {
            q.push(make_pair(node->right, false));
        }
    }
    return sum;
}
int main(){
    // [3,9,20,null,null,15,7]
    Node * root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
    cout << "The sum of the left nodes of the tree is " << sumofleftnodes(root) << endl;
    return 0;
}