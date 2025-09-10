#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
// we will be converting a sorted array to a Binary Search Tree
Node * solve(vector<int>& nums, int left , int right){
    if(left > right){
        return NULL;
    }
    int mid = left + (right - left) / 2;
    Node * root = new Node(nums[mid]);
    root->left = solve(nums, left , mid - 1);
    root->right = solve(nums, mid + 1, right);
    return root;
}
Node * arraytoBst(vector<int>& nums){
    return solve(nums, 0, nums.size() - 1);
}
int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    Node * root = arraytoBst(nums);
    while(root != NULL){
        cout << root->data << " ";
        root = root->right;
    }
    cout << endl;
    return 0;
}