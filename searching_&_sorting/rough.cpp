#include <iostream>
using namespace std;
/*  int binarysearch(int arr[], int start , int end, int x){
    if(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] == x){
            return mid;
        }
        else if (arr[mid]  < x){
            mid = start + 1;
        }
        else{
            mid = end - 1;
        }
    }
    return -1;
}
int exposearch(int arr[], int n, int x){
    if(arr[0] == x){
        return 0;
    }
    int i = 1;
    while(i<n){
        i = i*2;
    }
    return binarysearch(arr, i/2,min(i,n-1), x);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int x = 11;
    int n = sizeof(arr)/ sizeof(arr[0]);
    int ans = exposearch(arr,n,x);
    cout<<ans<<endl;
}
*/
// Book Allocation Problem
