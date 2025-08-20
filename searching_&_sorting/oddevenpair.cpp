#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>arr){
    int  s = 0;
    int e = arr.size() -1 ;
    int mid = s+(e-s)/2;
    while(s<e){
        mid = s+(e-s)/2;
        if(mid%2==0){
            if(arr[mid] == arr[mid + 1]){
                s = mid + 2;
            }
            else{
                e = mid;
            }
        }
        else{
            if(arr[mid] == arr[mid - 1]){
                s = mid + 1;
            }
            else{
                e = mid;
            }
        }
    }
    return s;
}
int main(){
    vector<int> arr{1,1,2,2,3,3,4,4,5,600,600,88,88};
    int ans = solve(arr);
    cout<<" the index is "<< ans;
    cout<<"the answer of the text is: "<< arr[ans]<<endl;
    return 0;
}