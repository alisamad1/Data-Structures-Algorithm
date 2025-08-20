#include <iostream>
#include <vector>
using namespace std;
bool search(vector<int> & nums, int target){
    int left = 0;
    int right = nums.size() - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(nums[mid] == target){
            return true;
        }
        if(nums[left] == nums[mid] && nums[right] == nums[mid]){
            left++;
            right--;
        }
        else if(nums[left] <= nums[mid]){
            if(nums[left] <= target && target < nums[mid]){
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        else{
            if(nums[right] < target && target <= nums[right]){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
    }
    return false;
}
int main(){
    vector<int> nums = {2,5,6,0,0,1,2};
    int target = 2;
    if (search(nums, target)){
        cout << "Target Found! " << endl;
    }
    else {
        cout << "Target Not Found! " << endl;
    }
    return 0;
}