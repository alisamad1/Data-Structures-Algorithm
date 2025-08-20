#include<iostream>
#include<vector>
using namespace std;
void Sort_colors(vector<int>& nums){
    int l = 0;
    int m = 0;
    int h = nums.size()-1;
    while(m<=h){
        if(nums[m] == 0){
            swap(nums[l],nums[m]);
            m++;
            l++;
        }
        else if(nums[m] == 1){
            m++;
        }
        else{
            swap(nums[m],nums[h]);
            h--;
        }
    }
}
int main(){
    vector<int> nums = {2,0,1,2,2,0,1};
    Sort_colors(nums);
    for(int num: nums){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}