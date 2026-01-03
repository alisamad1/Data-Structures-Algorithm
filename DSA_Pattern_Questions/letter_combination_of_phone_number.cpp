#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
void solve(string &digits, unordered_map<char, string> &mp, int index, string & temp, vector<string> &result){
    if(index >= digits.length()){
        result.push_back(temp);
        return;
    }
    char ch = digits[index];
    string letter = mp[ch];
    for(int i = 0; i < letter.length(); i++){
        temp.push_back(letter[i]);
        solve(digits, mp, index + 1, temp, result);
        temp.pop_back();
    }
    return;
}
vector<string> lettercombinations(string &digits){
    vector<string> result;
    if(digits.length() == 0){
        return {};
    }
    unordered_map<char, string> mp;
    mp['2'] = "abc";
    mp['3'] = "def";
    mp['4'] = "ghi";
    mp['5'] = "jkl";
    mp['6'] = "mno";
    mp['7'] = "pqrs";
    mp['8'] = "tuv";
    mp['9'] = "wxyz";
    string temp = "";
    solve(digits, mp, 0, temp, result);
    return result;
}
int main(){
    string digits;
    cout << "Enter the digits: ";
    cin >> digits;
    vector<string> result = lettercombinations(digits);
    cout << "The letter combinations are as: ";
    for(const string &s : result){
        cout << s << " ";
    }
    cout << endl;
    return 0;
}