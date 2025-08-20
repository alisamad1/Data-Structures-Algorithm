#include<iostream>
using namespace std;
bool isPossibleSolution(int a[], int n, int k , long long mid){
    long long timesum = 0;
    int c = 1;
    for(int i = 0; i<n; i++){
        if(a[i] > mid){
            return false;
        }
        if(a[i] + timesum > mid){
            c++;
            timesum = a[i];
            if(c>k) return false;
        }
        else{
            timesum += a[i];
        }
    }
    return true; 
}
long long minTime(int Arr[], int n, int k){
    long long start = 0;
    long long end = 0;
    for(int i = 0 ;i<n; i++){
        end = end + Arr[i];
    }
    long long ans = -1;
    while(start <= end){
        long long mid = start + (end - start) / 2;
        if(isPossibleSolution(Arr, n, k, mid)){
            ans = mid;
            end = mid;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}
int main(){
    int Arr[] = {5,10,30,20,15};
    int n = sizeof(Arr) / sizeof(Arr[0]);
    int k = 3;
    cout << "Minimum time required: " << minTime(Arr,n,k)<<endl;
    return 0;
}