#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val) : data(val), left(nullptr), right(nullptr){}
};
void inorder(Node * root, vector<int> & inorderval){
    if(root == NULL){
        return;
    }
    inorder(root->left, inorderval);
    inorderval.push_back(root->data);
    inorder(root->right, inorderval);
}
vector<int> mergeArrays(vector<int> & a, vector<int> & b){
    vector<int> ans (a.size() + b.size());
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < a.size() && j < b.size()){
        if(a[i] < b[j]){
            ans[k] = a[i];
            k++;
            i++;
        }
        else{
            ans[k] = b[j];
            k++;
            j++;
        }
    }
    while(i < a.size()){
        ans[k] = a[i];
        k++;
        i++;
    }
    while(j < b.size()){
        ans[k] = b[j];
        k++;
        j++;
    }
    return ans;
}
vector<int> mergeBST(Node * root1, Node * root2){
    vector<int> bst1;
    vector<int> bst2;
    inorder(root1, bst1);
    inorder(root2, bst2);
    return mergeArrays(bst1,bst2);
}
int main(){
    Node * root1 = new Node(2);
    root1->left = new Node(1);
    root1->right = new Node(3);

    Node * root2 = new Node(5);
    root2->left = new Node(4);
    root2->right = new Node(6);

    vector<int> merged = mergeBST(root1, root2);

    cout << "Merged BST in-order traversal: ";
    for(int val : merged){
        cout << val << " ";
    }
    cout << endl;

    return 0;

}