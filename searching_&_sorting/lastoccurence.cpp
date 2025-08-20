#include<iostream>
#include<vector>
using namespace std;
int lastoccurence(vector<int>& arr, int target){
    int s = 0;
    int e = arr.size() - 1;
    int mid;
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid] == target){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid] > target){
            e = mid-1;
        }
        else if(arr[mid] < target){
            s = mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {2,5,7,7,7,7,8,20};
    int target = 7;
    int ans = lastoccurence(arr, target);
    cout<<"the answer of last occurence is : "<<ans<<endl;
    return 0;
}