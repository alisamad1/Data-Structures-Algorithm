#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;  
string largestNumber(vector<int>& nums){
    vector<string> array;
    for(int num: nums){
        array.push_back(to_string(num));
    }
    sort(array.begin(), array.end(), [] (const string &a, const string &b){
        return (b + a) < (a + b);
    });
    if(array[0] == "0"){
        return "0";
    }
    string largestNumber1 ;
    for(const string& num : array){
        largestNumber1 += num;
    }
    return largestNumber1;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array " ;
    cin >> n ;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i] ;
    }
    cout << endl;
    string result = largestNumber(nums);
    cout << "The Largest Number present in the array is: " << result << endl;
    return 0;
}
