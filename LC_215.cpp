#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int findkthLargestElement(vector<int>& nums, int k){
    priority_queue<int, vector<int>, greater<int>> minheap;
    for(int num : nums){
        minheap.push(num);
        if(minheap.size() > k){
            minheap.pop();
        }
    }
    minheap.top();
}
int main(){
    int n;
    int k;
    cout << "Enter the value of N: " << endl;
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout << "Enter the value of K: " << endl;
    cin >> k;
    int result = findkthLargestElement(nums, k);
    cout << "The " << k << "th Largest element in the array is " << result << endl;
    return 0;
}