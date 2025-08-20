#include<iostream>
#include<vector>
using namespace std;
int removeallDuplicates(vector<int>& nums){
    if(nums.size() <= 2){
        return nums.size();
    }
    int index = 2;
    for(int i = 2; i<nums.size(); i++){
        if(nums[i] != nums[index-2]){
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}
int main(){
    vector<int> nums = {1, 2, 3, 3, 3, 3, 5, 6, 6, 7, 8};
    int newLength = removeallDuplicates(nums);
    cout<<"Output of the array after removing Duplicates would be"<<endl;
    for(int i = 0; i<newLength;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}