#include<iostream>
#include<vector>
using namespace std;
//binary search algorithm
int binarysearch(int arr[], int size,int target){
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;
    while(start<=end){
        int element= arr[mid];
        if(element == target){
            return mid;
        }
        else if(target < element){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }

    }
    return -1;
}
int main(){
    int arr[] = {2,4,6,8,10,12,14};
    int size = 7;
    int target = 2;
    int indexoftarget = binarysearch(arr,size,target);
    if(indexoftarget == -1){
        cout<<"element not found"<<" ";
    }
    else{
        cout<<"target found at "<< indexoftarget<<" index"<<endl;
    }
    return 0;
}