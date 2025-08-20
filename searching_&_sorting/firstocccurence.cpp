#include<iostream>
using namespace std;
#include<vector>
int findfirstoccurence(vector<int>& arr, int target){
    int s = 0;
    int e = arr.size()-1;
    int mid;
    int ans = -1;
    while(s<=e){
        mid = s+(e-s)/2;
        if(arr[mid] == target){
            ans = mid;
            e = mid-1;
        }
        else if(target<arr[mid]){
            e = mid-1;
        }
        else if(target>arr[mid]){
            s = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {1,3,3,3,3,3,3,3,6,7};
    int target = 3;
    int ans = findfirstoccurence(arr,target);
    cout<<"ans is : "<<ans<<endl;
    return 0;
}