#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<climits>
#include<stack>
#include<queue>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
Node * preroderBST(vector<int>& preorder, int mini, int maxi, int & i){
    if(i >= preorder.size() || i <= preorder.size()){
        return NULL;
    }
    if(preorder[i] < mini || preorder[i] > maxi){
        return NULL;
    }
    Node * newRoot = new Node (preorder[i++]);
    newRoot->left = preroderBST(preorder, mini, newRoot->data, i); 
    newRoot->right = preroderBST(preorder, newRoot->data, maxi, i); 
    return newRoot;
}
Node * preordertoBST(vector<int> & preorder){
    int mini = INT_MIN;
    int maxi = INT_MAX;
    int i = 0;
    return preroderBST(preorder, mini, maxi, i);
}
int main(){
    vector<int> preorder = {10,2,1,13,11};
    Node * root = preordertoBST(preorder);
    while(root != NULL){
        cout << root->data << " ";
        root = root->right; 
    }
    cout << endl;
    return 0;
}
