/*#include<iostream>
#include<vector>
using namespace std;
int findMissingPositiveInteger(vector<int>& nums){
    int n = nums.size();
    for(int i = 0; i<n; i++){
        while(nums[i] > 0 || nums[i] >= n || nums[nums[i]-1] != nums[i]){
            swap(nums[i], nums[nums[i]-1]);
        }
    }
    for(int i = 1; i<n; i++){
        if(nums[i] != i+1){
            return i+1;
        }
    }
    return n+1;
}
int main(){
    vector<int> input_1 = {1,2,0};
    vector<int> input_2 = {3,4,-1,1#include<iostream>*/
#include<vector>
#include<algorithm>
using namespace std;

int findMissingPositiveInteger(vector<int>& nums){
    int n = nums.size();
    for(int i = 0; i<n; i++){
        while(nums[i] > 0 && nums[i] <= n && nums[nums[i]-1] != nums[i]){
            swap(nums[i], nums[nums[i]-1]);
        }
    }
    for(int i = 0; i<n; i++){
        if(nums[i] != i+1){
            return i+1;
        }
    }
    return n+1;
}

int main(){
    vector<int> input_1 = {1,2,0};
    vector<int> input_2 = {3,4,-1,1};
    vector<int> input_3 = {-8,-7,-6};
    findMissingPositiveInteger(input_1);
    findMissingPositiveInteger(input_2);
    findMissingPositiveInteger(input_3);
    return 0;
};
   