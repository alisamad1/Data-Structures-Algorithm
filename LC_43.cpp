// we will be writing the code for Multiply strings Leetcode# 43
#include <iostream>
#include <vector>
#include <string>
using namespace std;
string multiply(string num1, string num2) {
    if (num1 == "0" || num2 == "0") {
        return "0";
    }
    vector<int> nums(num1.size() + num2.size(), 0);
    for (int i = num1.size() - 1; i >= 0; i--) {
        for (int j = num2.size() - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + nums[i + j + 1];
            nums[i + j + 1] = sum % 10;
            nums[i + j] += sum / 10;
        }
    }
    string result = "";
    int i = 0;
    while (i < nums.size() && nums[i] == 0) {
        i++;
    }
    while (i < nums.size()) {
        result.push_back(nums[i] + '0');
        i++;
    }
    return result;
}
int main() {
    string num1;
    string num2;
    cout << "Enter the String Num1: " ;
    cin >> num1;
    cout << "Enter the String Num2: ";
    cin >> num2; 
    string answer = multiply(num1, num2);
    cout << "The string multiplied by " << num1 << " and " << num2 << " is " << answer << endl;
    return 0;
}
