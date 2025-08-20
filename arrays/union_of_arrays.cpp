#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,3,5,7,9};  
    int sizeA = 5;
    int brr[] = {2,4,6,8};
    int sizeB = 4;
    vector<int>ans;
    for(int  i = 0; i<sizeA; i++){
        ans.push_back(arr[i]);
    }
    for(int i = 0; i<sizeB; i++){
        ans.push_back(brr[i]);
    }
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }  
    return 0;
}