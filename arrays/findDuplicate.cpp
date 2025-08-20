#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vecor<int>& nums){
    while(nums[0] != nums[nums[0]]){
        swap(nums[0], nums[nums[0]]);
    }
    return nums[0];
}