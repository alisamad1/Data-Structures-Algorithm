#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int kthsmallestelement(vector<int> &arr, int k){
    int n = arr.size();
    priority_queue<int> pq;
    for(int i = 0; i<k; i++){ 
        pq.push(arr[i]);
    }
    for(int i = k ; i < n; i++){ 
        if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    int ans = pq.top();
    return ans;
}
int main(){
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i] ;
    }
    cout << endl;
    int k;
    cout << "Enter the value of K: " << endl;
    cin >> k;
    int ans = kthsmallestelement(arr, k);
    cout << "The " << k << "th smallest element is: " << ans << endl;
    return 0;
}
