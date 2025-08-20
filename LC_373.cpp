// we will be solving the question  Find K Pairs with Smallest Sums
#include<iostream>
#include<vector>
#include<algorithm>
#include<array>
#include<queue>
using namespace std;
vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k){
    vector<vector<int>> result;
    priority_queue<array<int, 3>, vector<array<int, 3>>, greater<array<int, 3>>> minHeap;
    if(nums1.empty() || nums2.empty() || k == 0){
        return result;
    }
    for(int i = 0; i < nums1.size() && i < k ; i++){
        minHeap.push({nums1[i] + nums2[0], i, 0});
    }
    while(k > 0 && !minHeap.empty()){
        auto curr = minHeap.top();
        minHeap.pop();
        k--;
        int i = curr[1];
        int j = curr[2];
        result.push_back({nums1[i], nums2[j]});
        if(j + 1 < nums2.size()){
            minHeap.push({nums1[i] + nums2[j + 1], i , j + 1});
        }
    }
    return result;
}
int main(){
    int n ;
    int m;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    cout << "Enter the value of m: " << endl;
    cin >> m;
    vector<int> nums1(n);
    vector<int> nums2(m);
    cout << "Enter the elemets of nums1 : " << endl;
    for(int i = 0 ; i < n; i++){
        cin >> nums1[i];
    }
    cout << "Enter the elements of nums2 : " << endl;
    for(int i = 0; i < m; i++){
        cin >> nums2[i];
    }
    int k;
    cout << "Enter the value of K: " << endl;
    cin >> k;
    vector<vector<int>> result = kSmallestPairs(nums1, nums2, k);
    cout << "The " << k << " pairs with smallest sums are as: " << endl;
    for(const auto& pair : result){
        cout << "[" << pair[0] << ", " << pair[1] << "]" << endl;
    }
    cout << endl;
    return 0;
}