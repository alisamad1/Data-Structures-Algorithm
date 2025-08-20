// How many numbers are smaller than the current number
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> smallestNumberThanPreviousOne(vector<int>& nums) {
    vector<int> temp = nums; // Copy nums to temp
    sort(temp.begin(), temp.end()); // Sort temp
    
    unordered_map<int, int> d;
    for (int i = 0; i < temp.size(); i++) {
        if (d.find(temp[i]) == d.end()) {
            d[temp[i]] = i;
        }
    }
   
    vector<int> result;
    for (int num : nums) {
        result.push_back(d[num]);
    }
    
    return result;
}

int main() {
    vector<int> nums = {8, 1, 2, 2, 3};
    vector<int> result_1 = smallestNumberThanPreviousOne(nums);
    
    for (int num : result_1) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
