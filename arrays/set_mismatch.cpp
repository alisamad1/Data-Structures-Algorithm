#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
vector<int> findErrors(vector<int>& nums){
    int n = nums.size();
    int dup = -1;
    int missing = -1;
    for(int i = 0; i<n; i++){
        if(nums[abs(nums[i]) - 1] < 0){
            dup = abs(nums[i]);
        }
        else{
            nums[abs(nums[i]) - 1] *= (-1);
        }
    }
    for(int i = 0; i<n; i++){
        if(nums[i] > 0){
            missing = i+1;
            break;
        }
    }
    return{missing,dup};
}
int main(){
    vector<int> nums = {1,2,2,4};
    vector<int> result = findErrors(nums);
    cout<<"The results of the above codes will be ";
    for(int num: result){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}