#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void twosum(vector<int> & nums, int start, vector<vector<int>>& result, int target){
    int i = start;
    int j = nums.size() - 1;
    while(i < j){
        if(nums[i] + nums[j] < target){
            i++;
        }
        else if(nums[i] + nums[j] > target){
            j--;
        }
        else{
            result.push_back({-target, nums[i], nums[j]});
            while(i < j && nums[i] == nums[i + 1]){
                i++;
            }
            while(i < j && nums[j] == nums[j - 1]){
                j--;
            }
            i++;
            j--;
        }
    }
}
vector<vector<int>> threesum(vector<int>& nums){
    int n = nums.size();
    if(n < 3){
        return {};
    }
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < n - 2; i++){
        if(i != 0 && nums[i] == nums[i - 1]){
            continue;
        }
        twosum(nums, i + 1, result, -nums[i]);
    }
    return result;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<vector<int>> resultion = threesum(nums);
    cout << "Unique triplets that sum to zero are: " << endl;
    for(auto & triplet : resultion){
        cout << "[" ;
        for(int i = 0; i < triplet.size(); i++){
            cout << triplet[i];
            if(i < triplet.size() - 1){
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
    return 0;
}