#include<iostream>
#include<vector>
using namspace std;
int singleNumber(vector<int>& nums){
    int count = 0;
    for(int num: nums){
        count ^= num;
    }
    return count;
}
int main(){
    vector<int> nums = {1,2,2,1,3};
    cout<<"The Single Number in the Array"<<singleNumber(nums);
    return 0;
}