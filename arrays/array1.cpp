#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin >> n;
//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     for(int i = 0; i<n; i++){
//         cout<<arr[i];
//     }
//     cout<<endl; 
// }
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>> n;
//     int arr[n];
//     cout<<"enter array of n integers: ";
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// int main(){
//     int arr[5];
//     for(int i = 0; i < 5; i++){
//         cin>>arr[i];
//     }
//     for(int i = 0; i< 5; i++){
//         cout<<2*arr[i]<<" ";
//     }
//     return 0;
// }
// int main(){
//     int arr[500];
//     int n;
//     cout<<"how many numbers you want to add in the array: "<<endl;
//     cin>>n;
//     cout<<"enter the numbers: "<<endl;
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<"doubles: ";
//     for(int i = 0; i< n; i++){
//         cout<<2*arr[i]<<" ";
//     }
//     return 0;

// void printarray(int arr[],int size){
//     for(int i = 0; i< size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void increment(int arr[], int size){
//     arr[0] = arr[0] + 10;
//     printarray(arr,size);
// }
// int main(){
//     int arr[] = {2,3,56,6};
//     int size = 4;
//     increment(arr,size);
//     printarray(arr,size);
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8};
//     int size = 8;
//     int key = 3;
//     bool flag = 0;
//     for(int i = 0; i<size; i++){
//         if(arr[i] == key){
//             flag = 1; 
//         }
//     }
//     if (flag){
//         cout<<"element present";
//     }
//     else{
//         cout<<"element not present";
//     }
//     return 0;
// }
// void DutchFlagAlgorithm(int* a, int n){
//     int low = 0;
//     int high = n-1;
//     while(low<high){
//         if(a[low]<0){
//             low++;
//         }
//         else if(a[high]>0){
//             high--;
//         }
//         else{
//             swap(a[low],a[high]);
//         }
//     }
// }
// int main(){
//     int a[] = {1,-2,3,-4,5,-6,7,-8,9,-10};
//     int n = sizeof(a)/sizeof(int);
//     DutchFlagAlgorithm(a,n);
//     for(int i = 0; i<n; i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
int findDuplicate(vector<int>& nums){
    while(nums[0] != nums[nums[0]]){
        swap(nums[0], nums[nums[0]]);
    }
    return nums[0];
}